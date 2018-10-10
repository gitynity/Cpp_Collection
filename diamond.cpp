#include <iostream>
using namespace std;

int main()
{
	//Draw a diamond of 9x9 grid size
	
	int stars = 0 , spaces = 0;
	
	for(int row = 1; row <= 9; row++)
	{
		if(row <5)
		{
			stars = 2*row - 1;
			spaces = 5- row%5; 
		}
		
		else if(row == 5)
		{
			stars = 2*row - 1;
			spaces = row%5; 
		}
		
		
		else
		{	spaces = row%5;
			stars = 2*(9 - row) + 1; 
		}
		
		for(int i =1;i<=spaces;i++)
			cout<<" ";
		for(int j =1;j<=stars;j++)
			cout<<"*";
		cout<<endl;	
	}

	return 0;
}