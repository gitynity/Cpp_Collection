#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<setbase(8)<<65<<endl; //.gives the octal representation of 65
    cout<<setbase(10);
    
    setbase(16);  //No effect.   
    
    cout<<32<<endl;
    
    cout<<setbase(10)<<100<<endl; //base changed to decimal again.
    
    return 0;
}
//setbase() is used to represent number in some other base.
//For example decimal to binary , or decimal to octal etc

//once the base is set , it remains that for the entire program. 
//To restore it to say decimal , do this cout<<setbase(10);

//Note that just doing setbase(10) will not work. It has to be used with "cout" i.e  cout<<setbase(10). 
