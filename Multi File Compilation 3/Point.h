#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
	
	
	int x;
	int y;
	
	public:
			
		Point();
		
		Point(int x ,int y);
		
		int getx();

		int gety();

		void setx(int x);
		
		void sety(int y);
		
		friend std::ostream& operator << (std::ostream& output , Point &p);
		
		friend std::istream& operator >> (std::istream& input , Point &p);
	
};

#endif
