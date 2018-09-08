#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
	int room_width {0};		//c++11 style initialisation
	int room_length {0};	//c++11 style initialisation
	
	cout<<"Enter the room width:";
	cin>>room_width;
	
	cout<<"Enter the room_length:";
	cin>>room_length;
	
	cout<<"Area of the room is: "<<room_length * room_width<<" square feets"<<endl;
	
    return 0;
}
