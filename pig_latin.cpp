/* 
Write function that translates a text to Pig Latin and back. 
English is translated to Pig Latin by taking the first letter of every word, moving it to the end of the word and adding ‘ay’. 
“The quick brown fox” becomes “Hetay uickqay rownbay oxfay”.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[] {"The" ,"quick" , "brown" , "fox"};
	
	for(int i=0;i<4;i++)
	{
		
		char temp = s[i][0];
		
		int j=1;
		while(s[i][j]!=0)
		{
			s[i][j-1] =	s[i][j];
			j++;
			
		}
		if(s[i][j]=='\0')
			s[i][j-1]=temp;
		s[i]+="ay";	
		
	}
	for(int i=0;i<4;i++)
	cout<<s[i]<<endl;
	return 0;
}
