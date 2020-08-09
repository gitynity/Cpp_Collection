#include<bits/stdc++.h>
using namespace std;

int binary_search(std::vector<int>&v,int start, int end , int key)
{
	while(start<=end)
	{
		int mid = start+(end-start)/2;

		if(v[mid]==key)
			return mid;
		if(v[mid]<key)
			start=mid+1;
		else
			end=mid-1;
	}
	return -1;
}

int main()
{
	vector<int> v = {3,5,-4,8,11,1,-1,6};
	int sum =1;
	sort(v.begin(),v.end());
  for(int i =0;i<v.size();i++)
	{
		int ans = binary_search(v,i+1,v.size()-1,sum-v[i]);
		if(ans>=0){
			cout<<v[i]<<" "<<v[ans]<<" ";
			return 0;
		}
	}
	cout<<"Not found!\n";
	return 0;
}

//time complexity = O(nlogn)

//time complexity can be improved to O(n) using hash table. Also no need to sort the array if using hash table. But space complexity will increase to O(n)
