#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
	vector <int> vector1(0) , vector2(0);
	
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	cout<<"Element at position 0  and 1 in vector1: "<<vector1.at(0)<<" "<<vector1.at(1)<<endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	
	cout<<"Element at position 0  and 1 in vector2: "<<vector2.at(0)<<" "<<vector2.at(1)<<endl;
	
	vector <vector <int>> vector_2D;
	
	vector_2D.push_back(vector1);	//vector1 is of size 2
	vector_2D.push_back(vector2);	//vector2 is of size 2
	
	//Declaration using array style
	cout<<"2D vector at position 0,0: "<<vector_2D[0][0]<<endl;
	cout<<"2D vector at position 0,1: "<<vector_2D[0][1]<<endl;
	cout<<"2D vector at position 0,2: "<<vector_2D[1][0]<<endl;
	cout<<"2D vector at position 0,3: "<<vector_2D[1][1]<<endl;
	
	cout<<endl;
	//Declaration using vector style
	cout<<"2D_Vector now\n";
	cout<<vector_2D.at(0).at(0)<<" "<<vector_2D.at(0).at(1)<<endl;
	cout<<vector_2D.at(1).at(0)<<" "<<vector_2D.at(1).at(1)<<endl;
	
	
	//changing value at 0,0 in 2Dvector
	vector_2D.at(0).at(0)=1000;
	cout<<"2D_Vector now\n";
	cout<<vector_2D.at(0).at(0)<<" "<<vector_2D.at(0).at(1)<<endl;
	cout<<vector_2D.at(1).at(0)<<" "<<vector_2D.at(1).at(1)<<endl;
	return 0;
}

