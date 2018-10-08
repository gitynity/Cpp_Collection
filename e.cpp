#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct emp {
	string emp_name;
	string emp_post;
	string department;
	int leave_days;
};

int main()
{
	size_t choice = 0;
	vector<struct emp> v;
	cout<<"How many employees you want to create? \n";
	cin>>choice;
	if(choice)
		for(size_t i=0;i<choice;i++)
		{
			struct emp *temp = new struct emp;
			cout<<"\nEnter name:";
			cin>>temp->emp_name;
			cout<<"\nEnter post:";
			cin>>temp->emp_post;
			cout<<"\nEnter department:";
			cin>>temp->department;
			cout<<"\nEnter leave days:";
			cin>>temp->leave_days;
			cout<<"--------------------\n";
			v.push_back(*temp);
			temp = NULL;
		}	
	else
	 cout<<"bye\n";
		if(choice)
		{
			cout<<setfill('-')<<setw(20)<<left<<"emp_name"<<setfill('-')<<setw(20)<<left
			<<"department"<<setfill('-')<<setw(20)<<left
			<<"emp_post"<<setfill('-')<<setw(20)<<left
			<<"leave_days"<<endl;
			for(size_t i =0;i<choice;i++)
				{
					cout<<setfill('-')<<setw(20)<<left<<v.at(i).emp_name<<setfill('-')<<setw(20)<<left
					<<v.at(i).department<<setfill('-')<<setw(20)<<left
					<<v.at(i).emp_post<<setfill('-')<<setw(20)<<left
					<<v.at(i).leave_days<<endl;
				}
		
		}
	return 0;
}