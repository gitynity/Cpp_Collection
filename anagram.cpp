/*
 * given a word , say , 'abc' --> its anagram is 'acb , bac , bca , cab , cba'
 * i.e any word conatining only these letters in any order.
 * 
 * Note : The word may contain special charcters and numbers also.
 * The word will not contain a tab or a space.
 * 
 * My Solution
 * Time Complexity = O(n);
 * Space Complexity = O(1);
 * 
*/ 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a[127] {0};
	
	string s = "cbaa";
	
	for(size_t i =0 ;i<s.size();i++)
	{
		if(s[i])
			a[(int) s[i]]++;
	}
	
//	for(int i =0 ;i<=127;i++)
//	{
//		cout<<(char)i<<"="<<a[i]<<endl;
//	}
//	

	string tv = "abac";
	int b[127] {0};
	for(size_t i =0 ;i<tv.size();i++)
	{
		if(tv[i])
			b[(int) tv[i]]++;
	}
	

	bool flag = true;

	for(size_t i =0;i<=127;i++)
	{
		if(a[i]==b[i])
			continue;
		else
		{
			flag = false;
			break;
		}
	}
	
	if(flag)
		cout<<"Anagram\n";
		else cout<<"Not anagram\n";
	
	return 0;
}
