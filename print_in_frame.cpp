#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string s[] ={"Hello" , "Frame" , "Me" , "Box"};
	
		
	cout <<left<<setfill('*') << std::setw(9);
	cout<<"*"<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<"*";
		cout<<left<<setfill(' ') <<setw(7); 
  
        cout<<s[i]<<"*"<<endl;
	}
	
	cout <<left<<setfill('*') << std::setw(9);
	cout<<"*";
	return 0;
}
