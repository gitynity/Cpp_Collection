#include<bits/stdc++.h>

using namespace std;

void merge(int*a , int s , int l)
{
	auto mid = (s + l) / 2;
	int i = s;	//points at start of a
	int j = mid + 1;	//points at mid+1 of a
	int k = s;	//points at start of a temporary array

	int temp[100];

	while (i <= mid && j <= l)
	{
		if (a[i] < a[j])
		{
			temp[k++] = a[i++];
		}
		else
			temp[k++] = a[j++];
	}

	while (i <= mid)
		temp[k++] = a[i++];
	while (j <= l)
		temp[k++] = a[j++];

	for (i = s; i <= l; i++)
	{
		a[i] = temp[i];
	}
}

void mergesort(int*a , int s ,  int l)
{
	//Base case
	if (s >= l)
		return;		//we are not returning anything. we just ended function and cameback to the calling point
	//Follow 3 steps

	//1.Divide
	auto mid  = (s + l) / 2;

	//recursively the array as (s , mid) and (mid+1 , l)
	mergesort(a, s, mid);
	mergesort(a, mid + 1, l);

	//Merge the two parts
	merge(a, s, l);

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

	int a[10];
	for (auto i = 0; i < 10; i++)
		cin >> a[i];

	mergesort(a, 0, 9);

	for (auto i : a)
		cout << i << " ";
}
