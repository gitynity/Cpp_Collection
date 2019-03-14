/*
 A. Sushi for Two

time limit per test:1 second
memory limit per test:256 megabytes
input:standard input
output:standard output

Arkady invited Anna for a dinner to a sushi restaurant. The restaurant is a bit unusual: it offers n 
pieces of sushi aligned in a row, and a customer has to choose a continuous subsegment of these sushi to buy.

The pieces of sushi are of two types: either with tuna or with eel. 
Let's denote the type of the i-th from the left sushi as ti, where ti=1 means it is with tuna, 
and ti=2 means it is with eel.

Arkady does not like tuna, Anna does not like eel. 
Arkady wants to choose such a continuous subsegment of sushi such that 
"It Has Equal Number Of Sushi Of Each Type".
Find the length of the longest continuous subsegment of sushi Arkady can buy.

Examples

Input
Number of sushis available: 7
2 2 2 1 1 2 2

Output
4

Input
Number of sushis available: 6
1 2 1 2 1 2

Output
2

Input
Number of sushis available: 9
2 2 1 1 1 2 2 2 2

Output
6

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sushi_array = {2 ,2, 1, 1, 1, 2, 2, 2, 2};

int number_of_sushi(int n , int i)
{
	int sum2 = 0 , sum1 = 0 ,temp1 = 0 , temp2 = 0;
	
	sum1 = accumulate(sushi_array.begin(), sushi_array.end() - i, 0);
	sum2 = accumulate(sushi_array.begin() + i, sushi_array.end() , 0);

	temp1 = floor((n-i)/2) + ceil((n-i)/2)*2 ;
	temp2 = floor((n-i)/2)*2 + ceil((n-i)/2) ;
	
	if((n-i) < 1)
	return 0;
	
	else if( sum1 == temp1 || sum1 == temp2)
	return n-i;
	
	else if( sum2 == temp1 || sum2 == temp2)
	return n-i;
	
	else return number_of_sushi(n , i+1);
}

int main()
{
	cout<<number_of_sushi(9 , 0)<<endl;
	return 0;
}

//Here what is modified is the condition that we do not want each half to have only one kind of sushi. 
//We just want the sushis of both types to be equal in number.
//The original version of this question can be found here: https://codeforces.com/problemset/problem/1138/A
