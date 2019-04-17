//Given a singly linked list. Find if it is a pallindrome?
//Ex: 1-->2-->2-->1 is a pallindrome
//Ex: 1-->2-->2-->3 is not a pallindrome


#include<string>
#include <iostream>

using namespace std;
 
 class ListNode {
    public:
	 int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}		//initialiser list
 };

	        
   bool isPalindrome(ListNode* head) 
   {
	    string str1 , str2;
		ListNode* temp = head;
		
		while(temp)
		{
			str1 += temp->val;
			temp = temp->next;
		}
	   
		ListNode* current = head;
		ListNode* next = NULL;
		ListNode* prev = NULL;
		
		while (current != NULL) 
        { 
            // Let next point to the next node of current
            next = current->next; 
  
            // Reverse current node's pointer to point backwards
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        
		head = prev; 
		
		temp = head;
		
		while(temp)
		{
			str2 += temp->val;
			temp = temp->next;
		}
		
		if(str1 == str2)
			return true;
		else
			return false;
    
   }
        
  
int main()
{
	ListNode node1(1) , node2(2) , node3(2) , node4(1);
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	cout<<isPalindrome(&node1);
}
