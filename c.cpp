#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	char c ;
	vector <char> v;
	
	ifstream in_file;
	
	int space_count = 0;
	in_file.open("../hello.txt" , ios::in);
	
	if(in_file)	//if file is opened successfully
	{
		while(!in_file.eof())	//until we reach end of file
		{
			
			in_file.get(c);	//keep reading the data character by character into variable c
			
			if(c==' ')
			{
				space_count++;	//increment space_count
				if(space_count==1)	//if it is first space , accept it
					v.push_back(c);
				else 
					continue;	//else reject
			}
			if(c!=' ')		//if c is not a space , accept it
			{
				space_count = 0;
				v.push_back(c);
			}
		}
		in_file.close();
	}
	else
	{
		cerr<<"File could not be opened\n";
		return -1;
	}	
	
	
	for(size_t i = 0; i <v.size();i++)
	{
		cout<<v[i];
	}
	cout<<endl;
	
	return 0;
}