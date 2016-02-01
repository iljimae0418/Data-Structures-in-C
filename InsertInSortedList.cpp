#include <iostream> 
#include <cstdlib> 
#include <algorithm> 
using namespace std; 

struct ListNode{
	int data; 
	struct ListNode *next; 
}; 	

struct ListNode *InsertInSortedList(struct ListNode *head, struct ListNode *newNode){
	struct ListNode *current = head, temp;  
	if (!head) return newNode; 
	// find a node containing a value larger than the newNode. 
	while (current != NULL && current->data < newNode->data){
		temp = current;  
		current = current->next; 
	}
	// insert the newNode right before the current node.  
	newNode->next = current; 
	temp->next = newNode;   
	return head; 
}

int main(){
	// some code 
	return 0; 
}
