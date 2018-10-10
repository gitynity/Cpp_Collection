/*
 *BY me
 * Time Complexity = O(n)
 * Space COmplexity = O(n)
 * //tv and temp are temporary variables here.
*/ 
#include <float.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	float num = 34.562;		
	
	int whole_part = (int)num;
	int tv = whole_part;
	string word {};
	
	while(tv)			//while whole part exists
	{
		int x = tv%10;		//take its modulus to get the units digit
		tv/=10;
		word+=(char)x + '0';
	}
	
	reverse(word.begin() , word.end());	//now reverse the string to get digits in right order
	
	word+='.';
	
	//now lets take care of fractional part
	
	float frc = num - (float)whole_part;		//0.562
	while(frc>0)	
	{
		frc *= 10;					//frc = 5.62
		int temp = (int)frc;		//temp = 5
		word += (char)temp + '0';	//push temp i.e 5 on string
		frc -= (float)temp;			//0.62
	}
	
	cout<<word<<endl;
	return 0;
}
