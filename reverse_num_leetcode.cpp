/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321

Example 2:

Input: -123
Output: -321

Example 3:

Input: 120
Output: 21

Note:
Assume we are dealing with an environment which can only store integers within the 32-bit signed integer range:[−2^31,  2^31 − 1]. 
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

*/

#define MAX 2147483647
#define MIN -2147483648

class Solution 
{
public:
  long reverse(long x) 
  {
		long i = 0 , num = 0 , count = 0;
		bool flag = false;
		
		vector<long> temp;
		
		if(x<0)
		{
			flag = true;
			x = x*(-1);
		}	
     
     
		while(x)
		{
			temp.push_back(x%10);
			x=x/10;
			count++;
		}	
		
		for(i=1 ; i<=count ; i++)
			num += temp[i-1]*pow(10,count-i); 
		
		if(flag)
			num = num*(-1);
	
     if(num>MAX || num<MIN)
         return 0;
     
	 return num;
  }
};
