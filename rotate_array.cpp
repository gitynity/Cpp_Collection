// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0

#include<iostream>
using namespace std;
int main()
 {
	//cout<<Learner for Life;
	int T;
	long N , D;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    long a[N];
	    cin>>D;
	    
	    for(long i = 0;i<N;i++)
	    {
	        cin>>a[i];
	    }
	    
	    long count  =  N;
	    long i = D;
	    while(count--)
	    {
	        cout<<a[i++%N]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
