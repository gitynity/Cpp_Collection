/*
*Given is an array A consisting of n positive and negative integers such that A[1] < A[2] < A[3] ...... < A[n].
Write a function that takes this array as an input and outputs if there exists an element in the array such that a[i]= i.
The function outputs 0 if no such i exists. Note: Credits will be given only if the number of comparison done by the
function is much less than n.
*/ 
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array <int , 8> a {-5 , -3 , -2 , -1 , 2 , 5 , 7 , 8};
	int low = 0 , high = a.size();
	int mid , flag =0;
	while(low<=high)
	{
		mid = (low+high)/2;
		
		if(a.at(mid)==mid)
			{
			flag = 1;
			break;
			}
		
		else if(a.at(mid) < 0 || a.at(mid) < mid)
		{
			low = mid+1;
		}
		else if (a.at(mid) > mid)
		{
			high = mid-1;
		}
	}
	if(flag ==1)
		cout<<mid<<endl;
	else
		cerr<<"Such number does not exist\n";
	return 0;
}