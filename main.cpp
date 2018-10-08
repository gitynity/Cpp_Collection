/*
 *Time Complexity = O(n)
 *Space Complexity = O(n/2)
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string exp = {};//string of btackets
	stack <int> s;		//stack for comparison of top element
	
	cin>>exp;
	
	for(size_t i=0;i<exp.size();i++)
	{
		char t = exp[i];
		
		if(exp[0]=='}' || exp[0]==']' || exp[0]==')')	//checking if first element is a closing brace
		{
			cout<<"Unbalanced\n";
			return 0;
		}
		
		if(t=='{' || t=='(' || t=='[')	//opening braces are pushed on stack
		{	 
			s.push(t);
		}	
						//if closing braces at the top match with closing braces in string then pop
		else if(t=='}' && s.top() == '{')
			s.pop();
			
		else if(t==']' && s.top() == '[')
			s.pop();
			
		else if(t==')' && s.top() == '(')
			s.pop();
		
		else 	//if closing braces at the top do not match with closing braces in string then unbalanced
		{
			cout<<"Unbalanced\n";
			return 0;
		}
	}
	
	
	if(s.empty())	//if stack is completely popped empty , balanced
		cout<<"Balanced\n";
	
	return 0;
}