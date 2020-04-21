#include "Point.h"

int main()
{
	Point p1 , p2 , p3;
	
	p1.setx(10);
	p1.sety(20);
	
	p2.setx(100);
	p2.sety(200);
	
	std::cout<<"p1 :"<<p1<<"\np2 :"<<p2;
	
	std::cout<<"\nEnter p3: ";
	std::cin>>p3;
	std::cout<<"\np3 :"<<p3<<std::endl;
	
	
	return 0;
}
