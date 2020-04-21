#include<iostream>

using namespace std;

class Point
{
	public:
	
	int x;    //Here I have made x and y public , so that they can be accessed by overloaded ostream and istream operators.
	int y;    //If x and y were to remain private , we could still overload ostream and istream operators using friend function
	
			
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

};


/*

<< and >> must be overloaded as a global function.


Why these operators must be overloaded as global?

In operator overloading, if an operator is overloaded as member, 
then it must be a member of the object on left side of the operator. 
For example, consider the statement “ob1 + ob2” (let ob1 and ob2 be objects of two different classes).
To make this statement compile, we must overload ‘+’ in class of ‘ob1’ or make ‘+’ a global function.

The operators ‘<<' and '>>' are called like 'cout << ob1' and 'cin >> ob1'. 
So if we want to make them a member method, then they must be made members of ostream and istream classes,
which is not a good option most of the time. 
Therefore, these operators are overloaded as global functions with two parameters, cout and object of user defined class.
 
*/

	std::ostream& operator << (std::ostream& output , Point &p)
	{
			output<<p.x<<","<<p.y;	//object of ostream will receive p.x and p.y using << operator
			return output;          //Therefore , operator overloaded
	}
	
	std::istream& operator >>(std::istream& input , Point &p)
	{
		input>>p.x>>p.y;		//object of istream will insert value into into p.x and p.y using >> operator
		return input;       //Therefore , operator overloaded
	}
	
int main()
{
	Point p1 , p2 , p3;
	
	p1.setx(10);
	p1.sety(20);
	
	p2.setx(100);
	p2.sety(200);
	
	cout<<"p1("<<p1<<")\np2("<<p2<<")\n";		// associativity of << is left to right
	
	Point p4;
	
	cout<<"Enter coordinates for p4: ";
	cin>>p4;
	
	cout<<"p4 :"<<p4;
	
	return 0;
}
