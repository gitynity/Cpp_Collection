#include<iostream>

using namespace std;

class Point
{
	
	
	int x;
	int y;
	
	public:
			
		Point()
		{
			x = 0;	
			y = 0;	
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
		
		friend std::ostream& operator << (std::ostream& output , Point &p);
		
		friend std::istream& operator >> (std::istream& input , Point &p);
	
};


	std::ostream& operator << (std::ostream& output , Point &p)
	{
			output<<p.x<<","<<p.y;	//Though we are passing &p as arguement , we access x as p.x and not p->x. Why?
					        //Because &p is the reference to actual object p , 
                                                //it is not a pointer variable which contains the address of p
			return output;
	}
	
	std::istream& operator >>(std::istream& input , Point &p)
	{
		input>>p.x>>p.y;		//object of istream will insert value into into p.x and p.y
		return input;
	}
	
	
int main()
{
	Point p1 , p2 , p3;
	
	p1.setx(10);
	p1.sety(20);
	
	p2.setx(100);
	p2.sety(200);
	
	cout<<"p1 :"<<p1<<"\np2 :"<<p2;
	
	cout<<"\nEnter p3: ";
	cin>>p3;
	cout<<"\np3 :"<<p3;
	
	return 0;
}
