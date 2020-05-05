#include<bits/stdc++.h>

using namespace std;

struct linkedlist
{
	int val;
	struct linkedlist* next;
	linkedlist(int n) : val(n) , next(nullptr) {}
};

linkedlist* merge(linkedlist* ptr1 , linkedlist* ptr2)
{
	linkedlist *start = nullptr;
	linkedlist *lastsmallnode = nullptr;

	if (ptr1->val < ptr2->val)
	{
		start = ptr1;
		lastsmallnode = ptr1;
		ptr1 = ptr1->next;
	}
	else
	{
		start = ptr2;
		lastsmallnode = ptr2;
		ptr2 = ptr2->next;
	}

	while (ptr1 && ptr2)
	{
		if (ptr1->val < ptr2->val)
		{
			lastsmallnode->next = ptr1;
			lastsmallnode = ptr1;
			ptr1 = ptr1->next;

		}

		else
		{
			lastsmallnode->next = ptr2;
			lastsmallnode = ptr2;
			ptr2 = ptr2->next;

		}

	}
	if (ptr1)
	{
		lastsmallnode->next = ptr1;
	}
	if (ptr2)
	{
		lastsmallnode->next = ptr2;
	}
	return start;
}

linkedlist* make_list( linkedlist * start , vector<int>v)
{
	auto llnode = start;
	for (auto i : v)
	{
		linkedlist*  temp = new linkedlist(i);
		llnode->next = temp;
		llnode = llnode->next;
	}
	auto delnode = start;
	start = start->next;
	free(delnode);
	return start;
}

void print_list(linkedlist * ptr)
{
	while (ptr)
	{
		cout << ptr->val << " -> ";
		ptr = ptr->next;
	}
	cout << "NULL\n";

}

int main()
{	//If there is an online judge then the input is taken from it and output is given to it

#ifndef ONLINE_JUDGE		//This code only runs if there is no online judge
	//You can change the name of files here to change input ouptut files
	{	\
		freopen("input.txt", "r", stdin);	\
		freopen("ouput.txt", "w", stdout);	\
	}
#endif

	int test;
	cin >> test;
	vector<int> a , b;
	int temp = 0;
	int m , n;
	while (test--)
	{
		cin >> n;

		for (auto i = 0; i < n; i++)
		{
			cin >> temp;
			a.emplace_back(temp);
		}

		cin >> m;

		for (auto i = 0; i < m; i++)
		{
			cin >> temp;
			b.emplace_back(temp);
		}

		linkedlist* ptr = new linkedlist(-1);
		linkedlist* ptr1 = new linkedlist(-2);


		ptr = make_list(ptr , a);
		cout << "List1: ";
		print_list(ptr);


		ptr1 = make_list(ptr1 , b);
		cout << "List2: ";
		print_list(ptr1);

		auto res = merge(ptr , ptr1);
		cout << "\nMerged List: \n";
		print_list(res);
		cout << "\n\n";
	}
	return 0;
}
