/*
if stairs = n
and each step can be made of either 1 staircase or 2 staircase or 3 staircase

if you have to reach the top , you can go there 
either using stair just before the top (n-1), i.e w1
or using stair just 2 before the top (n-2), i.e w2
or using stair just 3 before the top (n-3) i.e w3

So total ways possible = w1+w2+w3

*/

#include <iostream>
using namespace std;

int func(int n)
{
	if(n<0)
		return 0;
	if(n==0)
	    return 1;
	if(n>0)
    	return func(n-1)+func(n-2)+func(n-3);
}

int main()
{
	cout<<func(4);
	return 0;
}
