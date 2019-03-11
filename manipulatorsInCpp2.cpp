//setfill only works with setw() function.
//setfill('*') fills the remaining empty fields in setw() statements by *.
//setfill('*') will remain active until end of the program.
//to stop it from filling in * in setw() statements , use cout<<setfill(' ');


#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	cout<<setfill('*');
	cout<<setw(5)<<1<<endl;
	cout<<setw(5)<<10<<endl;
	cout<<setw(5)<<100<<endl;
	cout<<setw(5)<<"---"<<endl;
	cout<<setw(5)<<111<<endl;
	return 0;
}


//iomanip.h is header file which contains manipulator operators and manipulator functions.
//ex: manipulator operators----> endl , ends.
//ex: manipulator functions----> setw() , setprecision() , setfill() , setiosflags().
