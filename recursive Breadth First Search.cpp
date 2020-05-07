#include <iostream>
#include <vector>
#include <queue>
#include <chrono>

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

queue<node *> q;

void recursiveBFS(node* root , int n)
{
	static int i = 0;   //count for number of calls
	
	if(i==0)	
		q.push(&tree[0]);   //if first call to function , push the root in the queue
	i++;
	
  
  //Base case
	if(!q.front())
		return;
  //Value found  
	if(q.front()->val==n)
	{
		cout<<"Found "<<n<<" using recursive BFS ";
		return;
	}
  //push left and right child to queue
	q.push(root->left);
	q.push(root->right);
	q.pop();    //pop the front of element from queue
  
  //recursive call to front element of queue
  
	recursiveBFS(q.front() , n);
}

int main()
{
    using namespace std::chrono; //used to measure time taken by a fucntion to complete execution

    make_tree();
	  
    auto start = high_resolution_clock::now();  //clock starts now , i.e. just before function call.
	
    recursiveBFS(&tree[0],7);
    
    auto stop = high_resolution_clock::now();   //clock stops now , i.e. just after function finished execution.
	
	  auto duration = duration_cast<microseconds>(stop - start);  //duration = stop - start
	
	  cout << "\nTime taken by recursive BFS: "<< duration.count() << " microseconds" << endl; 
    
    return 0;
}
