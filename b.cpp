#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct person
{
	string name;
	unsigned long int mobile;
	unsigned long int landline;
	string email;
	string address;
};

void search_by_mail(string , vector <struct person *>);
int main()
{
	string search_mail;
	bool choice = false;
	cout<<boolalpha<<endl;
	cout<<"Want to add person..?\n";
	cin>>choice;
	cout<<"You enterd choice as : "<<choice<<endl;	//true-->for non-zero , false for zero
	
	if(choice)
	{
		vector <struct person *> a; 
		
		struct person* temp= new struct person;
		
		cout<<"\nEnter name for person: ";
		cin>>temp->name;
		cout<<"\nEnter email for person: ";
		cin>>temp->email;
		cout<<"\nEnter mobile for person: ";
		cin>>temp->mobile;
		cout<<"\nEnter landline for person: ";
		cin>>temp->landline;
		cout<<"\nEnter address for person: ";
		cin>>temp->address;
		
		a.push_back(temp);
		
		cout<<"Details for "<<a[0]->name<<" entered successfully"<<endl;
		
		cout<<"Search for a person using email..\n";
		cin>>search_mail;
		search_by_mail(search_mail , a);
	}
	
	return 0;
}

void search_by_mail(string mail , vector <struct person *> nodes)
{
	for(size_t i = 0 ; i < nodes.size(); i++ )
	{
		if(nodes[i]->email == mail)
		{
			cout<<"Found him!\n";
			cout<<"His name is : "<<nodes[i]->name<<endl;
			break;
		}
		else
			cout<<"Person does not exits\n";
	}
}
 
