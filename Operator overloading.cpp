#include<iostream>

using namespace std;

class Point
{
	
	int x;
	int y;
	
	public:
		
		Point()
		{
			this->x = 0;	//Just x = 0;
			this->y = 0;	//and y = 0; will also work. 'this' pointer is not needed here.
		}
		
		Point(int x ,int y)
		{
			this->x = x;
			this->y = y;
		}
		
		int getx()
		{
			return x;
		}

		int gety()
		{
			return y;
		}

		void setx(int x)
		{
			this->x = x;
		}
		
		void sety(int y)
		{
			this->y = y;
		}

		Point operator +(Point pos)				// '+' is overloaded to be able to add objects of class Point
		{
			Point temp;
			temp.setx(this->x + pos.getx());
			temp.sety(this->y + pos.gety());
			
			return temp;
		}
		
		bool operator ==(Point pos)				// '==' is overloaded to be able to compare the objects of class Point
		{
			if( this->getx() == pos.getx() && this->gety() == pos.gety() )
			{
				return true;
			}
			else
			{
				return false;
			}
		}	
};

int main()
{
	Point p1 , p2 , p3;
	
	p1.setx(10);
	p1.sety(20);
	
	p2.setx(100);
	p2.sety(200);
	
	
	cout<<"Point p1("<<p1.getx()<<","<<p1.gety()<<")\n";
	cout<<"Point p2("<<p2.getx()<<","<<p2.gety()<<")\n";
	
	p3 = p1 + p2;
	
	cout<<"p1+p2 = p3("<<p3.getx()<<","<<p3.gety()<<")"<<endl;
	
	Point p4(60,120);
	
	cout<<"Point p4("<<p4.getx()<<","<<p4.gety()<<")\n";
	
	cout<<"Comparing p2 and p4..."<<endl;
	if(p4 == p2)
		cout<<"p2 and p4 are the same points\n";
	else
		cout<<"p2 and p4 are different points\n";
		
	return 0;
}
