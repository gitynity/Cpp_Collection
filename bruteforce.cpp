#include <iostream>
using namespace std;

int main()
{
	int a[] = {1,2,4,5,6,7,8,10,12};
	int num =9;
	//chose 6 numbers out of these 9
	for(int i = 0; i < num-5; i++)
	
		for(int j = i+1; j < num-4; j++)
			
			for(int k = j+1; k < num-3; k++)
				
				for(int l = k+1; l < num-2; l++)
					
					for(int m = l+1;m < num-1; m++)
						
						for(int n = m+1; n < num-0; n++)
							
							cout<<a[i]<<","<<a[j]<<","<<a[k]<<","<<a[l]<<","<<a[m]<<","<<a[n]<<endl;
	return 0;
}
