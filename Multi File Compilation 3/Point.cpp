#include"Point.h"

			
		Point::Point()
		{
			x = 0;	
			y = 0;	
		}
		
		Point::Point(int x ,int y)
		{
			this->x = x;
			this->y = y;
		}
		
		int Point::getx()
		{
			return x;
		}

		int Point::gety()
		{
			return y;
		}

		void Point::setx(int x)
		{
			this->x = x;
		}
		
		void Point::sety(int y)
		{
			this->y = y;
		}	


	std::ostream& operator << (std::ostream& output , Point &p)
	{
			output<<p.x<<","<<p.y;	//Though we are passing &p as arguement , we access x as p.x and p->x. Why?
									//Because &p is the reference to actual object p , it is not a pointer variable which contains the address of p
			return output;
	}
	
	std::istream& operator >>(std::istream& input , Point &p)
	{
		input>>p.x>>p.y;		//object of istream will insert value into into p.x and p.y
		return input;
	}
