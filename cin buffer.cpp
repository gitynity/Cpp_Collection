#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int array[100];
	int count = 0;

	for(int i = 0;i<100;i++)
	{
		if(cin>>array[i])		//if integer is entered , then cin returns success
		{
			count++;
			//input worked
		}
		else
		{
			//invalid character , therefore cin does not return success and cin has junk value in its buffer
			cin.clear();	//because of the invalid input , cin is now in non-working state , and we are clearing that state using cin.clear()
			cin.ignore(numeric_limits<streamsize>::max() , '\n');			// Ignores all the characters in the cin buffer until a new line (\n) is reached		
			break;															// This numeric_limits is defined in limits header file.	
		}
	}

	string text;
	cin>>text;

	cout<<text<<endl;

	for(int i=0;i<count;i++)
		cout<<array[i]<<endl;
	
	return 0;
}
