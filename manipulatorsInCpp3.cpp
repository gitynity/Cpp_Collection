#include <iostream.h>
#include <iomanip.h>

int main()
{
    cout<<22/7.0<<endl;	//gives 5 digits after decimal point.
		cout<<setprecision(3)<<22/7.0;	//gives 2 digits after decimal 
		return 0;
}

//   Note that "<<" is overloaded left shift operator. 
//   Here it is used as an operator which puts the data after it into "cout" object.
