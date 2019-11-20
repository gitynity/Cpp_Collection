//https://practice.geeksforgeeks.org/problems/sum-of-bit-differences/0#ExpectOP


#include<iostream>

using namespace std;
int main()
 {
	//cout<<Learner for Life;
	
    int T,N;	
	cin>>T;
	
	while(T--)
	{
	    cin>>N;
	    
	    int a[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>a[i];
	    
	    int pairs[N][N];
	    
	    int sum = 0;
	    
	    for(int i = 0;i<N;i++)
	    {
	        for(int j = 0;j<N;j++)
	        {
	            pairs[i][j] = (a[i])^(a[j]);
	        }
	    }
	    
	    for(int i = 0;i<N;i++)
	    {
	        for(int j = 0;j<=i;j++)
	        {
	            while(pairs[i][j])
	            {
	            sum += (pairs[i][j])&1;
	            (pairs[i][j])>>=1;
	            }
	        }
	}
	    cout<<sum*2<<endl;  //i considered 'ab' to be same as 'ba' but they are counting them as different pairs
	}                       //so to get the other half of sum i multiplied by 2
	
	return 0;
}
