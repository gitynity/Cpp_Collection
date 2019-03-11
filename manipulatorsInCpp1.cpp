//iomanip.h is header file which contains manipulator operators and manipulator functions.
//ex: manipulator operators----> endl , ends.
//ex: manipulator functions----> setw() , setprecision() , setfill() , setiosflags().

//This is an example for setw() function.

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	cout<<setw(5)<<1<<endl;
	cout<<"+"<<setw(4)<<10<<endl;
	cout<<"+"<<setw(4)<<100<<endl;
	cout<<setw(5)<<"---"<<endl;
	cout<<setw(5)<<111<<endl;
	return 0;
}


//setw() can be understood as SetWidth. It first sets a width for writing. Then starts writing from right by default.
