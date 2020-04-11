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
	
	//When I try to enter "hello there" into the greeting variable , I am doing that using cin object.
	//After "hello" ,cin encounters a SPACE and assigns the input 'before the SPACE' to the 'greeting' variable
	//but the 'input after the SPACE' is still remaining in the cin buffer
	//so the next variable (here 'left_over') gets the 'input after the SPACE' until either another SPACE is encountered  
	//or the input is finished.
	
	//To make this more clear , lets input a sentence in one variable through cin
	
	string namaste;
	cin>>namaste;
	cout<<namaste<<endl;
	
	//lets input "india is big"
	//when we cout namaste , we just get "india" 
	//"is big" is still in the cin buffer
	//if we had two more variables taking input through the cin object ,one would get "is" and other would get "big" 
	
	
	//Now lets clear the cin buffer
	cin.ignore(numeric_limits<streamsize>::max(), '\n');	//remember that cin is an object and it has many member functions	
								//ignore() is one of those functions							
	
	
	//now lets use getline() to input the complete sentence
	
	getline(cin,namaste);
	
	cout<<namaste<<endl;
	
	return 0;
}
