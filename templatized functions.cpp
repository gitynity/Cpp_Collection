#include<iostream>
#include<string>

template <typename T>
void swapper(T &a , T &b)
{
	T temp = a;
	a = b;
	b = temp;
}


int main()
{
	std::string first = "hello" , last = "Bye";
	
	swapper(first, last);    

	std::cout<<"first = "<<first<<" last = "<<last<<std::endl;	
	
	std::string s1 = "abc" , s2  ="def";
	
	swapper(s1,s2);
	
	std::cout<<"s1 = "<<s1<<" s2 ="<<s2<<std::endl;

return 0;
}

