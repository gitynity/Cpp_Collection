#include <iostream>
using namespace std;

int main()
{
	unsigned int PeopleInJabalpur;
	cout<<"Number of people in Jabalpur is: "<<PeopleInJabalpur;
	
	unsigned long int PeopleInIndia;
	cout<<"Number of people in India is: "<<PeopleInIndia;
	
	unsigned long long PeopleInWorld;
	cout<<"Number of people in the world is: "<<PeopleInWorld;
	


	short int i {30000};
	short int j {1000};
	
	short int k {i*j};	//Integer Overflow
	
	cout<<"Product of i and j is: "<<k<<endl;
	
	return 0;
}
