#include <iostream> 
#include <cstdlib> 
using namespace std;

// example code that shows how one might completely get rid of the linked list. 

struct ListNode{
	int data; 
	struct ListNode *next; 
}; 

void DeleteLinkedList(struct ListNode **head){
	struct ListNode *auxiliaryNode, *iterator;  
	iterator = head; 
	while (iterator){
		auxiliaryNode = iterator->next; 
		free(iterator); 
		iterator = auxiliaryNode;  
	}
	free(head); 
}

