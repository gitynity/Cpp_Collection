#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	ofstream write ("My Best Friends.txt");
	
	vector<string> best_friends;
	int n;
	
	cout<<"How many best friends you have?"<<endl;
	cin>>n;
	
	if(n>1)
	{
		cout<<"What are their names?"<<endl;
		write<<"Currently , I have "<<n<<" best friends. Their names are : "<<endl;
	}
	
	else if(n==1)
	{
		cout<<"What is your best friend's name?"<<endl;
		write<<"Currently , I have only "<<n<<" best friend. My best friend's name is: "<<endl;
	}
	
	else if(n==0)
	{
		write<<"Friends are overrated anyways!\n";
		return 0;
	}
	
	else 
	{
		write<<"You mean you have no friends but you have enemies.\n";
		return 0;
	}
	
	for(auto i=0;i<n;i++)
		{
			string name;
			cin>>name;
			best_friends.emplace_back(name); 
		}
	for(auto name:best_friends)
		write<<name<<endl;
	
	return 0;
}
