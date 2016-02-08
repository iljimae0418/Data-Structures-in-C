#include <iostream>
#include <cstdio> 
#include <algorithm> 
using namespace std; 

struct ListNode{
	int data; 
	struct ListNode *next;  
};  


void SplitList(struct ListNode *head, struct ListNode **head1, struct ListNode **head2){
	struct ListNode *slowPtr = head; 
	struct LIstNode *fastPtr = head; 
	if (head == NULL) return; 
	// if there are odd number of nodes in the list, fastPtr->next = head 
	// if there are even number of nodes in the list, fastPter->next->next = head 
	while (fastPtr->next != head && fastPtr->next->next != head){
		fastPtr = fastPtr->next->next; 
		slowPtr = slowPtr->next;  
	}
	if (fastPtr->next->next == head){
		fastPtr = fastPtr->next;  
	}
	*head1 = head;  
	if (head->next != head){
		*head2 = slowPtr->next; 
	}
	fastPtr->next = slowPtr->next; 
	slowPtr->next = head; 
}


int main(){
	// some code; 
	return 0; 
}
