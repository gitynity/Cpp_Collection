/*
*Write a program which finds a substring from the given string and replaces it with third string. Your program
should have a function replace which looks like:

  void replace(char str[ ], char *from, char *to)
*/ 
#include <iostream>
#include <string>
using namespace std;

string replace(string _word , string _sub , string _by)
{
	
	int flag = 1;
	string temp = _word;			//copy of main string
	size_t _sublen = _sub.size();	//length of substring to find and replace in main string
	size_t _bylen = _by.size();		//length of substring to place in main string
	
	
	for(size_t i=0;i<temp.size();i++)
	{
		if(temp.substr(i,_sublen)==_sub)
		{
			for(size_t k = i , l = 0; k <= i + _bylen && l < _bylen;k++ , l++)
			{
				temp[k] = _by[l];
			}
			flag = 0;
			break;
		}
		else flag = 1;
		
	}
	if(!flag)
	 return temp;
	else{
	cout<<"NO substring found to replace\n";
	return temp;
	}
}

int main()
{
	string word = "Hellopeople";
	string sub = "lope";
	string by = "col";
	string result = replace(word , sub , by);
	
	cout<<result;
	return 0;
}