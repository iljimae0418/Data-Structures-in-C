#include <iostream> 
#include <cstdlib> 
#include <cstring> 
#include <algorithm> 
using namespace std; 

// an example code of how to delete a node from a linked list.  

struct ListNode{
	int data; 
	struct ListNode *next;  
}; 

void DeleteNodeFromLinkedList(struct ListNode **head, int position){
	int k = 1; 
	struct ListNode *p,*q;  
	if (*head == NULL){
		printf("List Empty\n");  
		return;  
	}
	p = *head; 
	if (position == 1){
		// 가장 앞에서 삭제. 
		p = *head; 
		*head = *head->next; 
		free(p); 
	}else{
		while (p != NULL && (k < position-1)){
			k++; 
			q = p; 
			p = p->next; 
		}
		if (p == NULL){
			printf("Position does not exist\n"); 
		}else{
			q->next = p->next; 
			free(p);  
		}
	}
}
