#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct node
{
	int val;
	struct node* left;
	struct node* right;
};

vector<int> a {1,5,4,3,7,2,9};
vector<node> tree(7 , {0 , nullptr , nullptr});

void make_tree()
{
	for( auto i = 0 ; i < 7 ; i++ )
	{
		tree[i].val = a[i];
	}

	for( auto j = 0 ; j < 3 ; j++)
	{
		tree[j].left = &( tree[ 2*(j+1) -1]);
		tree[j].right = &( tree[ 2*(j+1)]);
	}

}
node * temp = &tree[0];
queue<node *> buffer;

void BFS()
{

    buffer.push(temp);

    node * r = nullptr;
    node * l = nullptr;

    cout<<(buffer.front())->val<<endl;

		while(!buffer.empty())
		{

			l = ( buffer.front()->left );
			if(l)
			{
				buffer.push(l);
				cout<<l->val<<endl;
			}

			r = ( buffer.front()->right );
			if(r)
			{
				buffer.push(r);
				cout<<r->val<<endl;
			}
			buffer.pop();

		}

}

int main()
{
    make_tree();
    BFS();
    return 0;
}
