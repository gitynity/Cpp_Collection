#include <iostream>
#include <math.h>
using namespace std;

int disarium(int);

int main() {
    
    int T,N;
    cout<<"Enter number of test cases:";
	cin>>T;
	
	for(int c=0;c<T;c++)
	{
	cout<<"\nEnter number: ";
	cin>>N;
	cout<<disarium(N)<<endl;
    }

	return 0;
	
}

int disarium(int N)
{
    int size=0,a[10],i=0,sum=0;

    int temp=N;
    while(temp)
    {
        temp=temp/10;
        size++;
    }

temp=N;

for(i=size;i>0;i--)
{
	a[i]=temp%10;
	temp/=10;
}

for(i=1;i<=size;i++)
sum+=pow(a[i],i);

if(sum==N)
	return 1;
else
	return 0;
}
