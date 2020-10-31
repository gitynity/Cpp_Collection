#include<iostream>
using namespace std;

void increment_pointer(int* &p) //pointer is called by reference/address
{
    p++;
}

void does_not_increment_pointer(int* p) //pointer is called by value
{
    p++;
}

int main()
{
    int *p;
    cout<<p<<endl;  //pointer contains random address = 0x400000100003e00
    increment_pointer(p);
    cout<<p<<endl;  //pointer incremented to point to next address = 0x400000100003e04
    does_not_increment_pointer(p);
    cout<<p;    //pointer is not incremented ,  address remains same = 0x400000100003e04
}
