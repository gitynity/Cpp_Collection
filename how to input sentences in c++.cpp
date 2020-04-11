#include<iostream>
#include<string>
#include<limits>		

using namespace std;

int main()
{
	string greeting;
	cin>>greeting;
	
	string left_over;
	cin>>left_over;
	
	cout<<greeting<<endl;
	cout<<left_over<<endl;
	
	//When i enter "hello there" into the greeting,
	//after "hello" ,cin encounters a space and assigns the input 'before the space' to greeting
	//but the 'input after the space' is still remaining in the cin
	//so the next variable (here left_over) gets it 
	
	//to make this clear , lets input a sentence in one variable through cin
	
	string namaste;
	cin>>namaste;
	cout<<namaste<<endl;
	//lets input "india is big"
	//when we cout namaste , we just get "india" 
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');		//to clear the cin buffer	
	
	
	//now lets use getline() to input the complete sentence
	
	getline(cin,namaste);
	
	cout<<namaste<<endl;
	
	return 0;
}
