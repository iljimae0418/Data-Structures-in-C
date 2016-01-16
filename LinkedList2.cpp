// example code that demonstrates how we can add a node to the linked list. 
#include <iostream> 
#include <cstdlib> 
using namespace std; 

// snippet code for demonstrating the method of inserting new nodes in the 
// linked list. 

struct ListNode{
	int data; 
	struct ListNode *next;  
}; 

void InsertInLinkedList(struct ListNode **head, int data, int position){
	int k = 1; 
	struct ListNode *p,*q,*newNode;  
	newNode = (ListNode *)malloc(sizeof(struct ListNode));   
	if (!newNode){ // always check for possibilities of memory error. 
		printf("Memory Error"); 
		return;  
	}
	newNode->data = data; 
	p = *head; 
	if (position == 1){
		// 가장 처음에 노드를 추가시킨다. 
		newNode->next = p;  
		*head = newNode;  
	}
	else{
		// position-1까지 진행된다. 
		while ((p != NULL) && (k < position-1)){
			k++;  
			q = p; 
			p = p->next;  
		}
		if (p == NULL){ // 가장 끝에 노드를 추가한다. 
			q->next = newNode;  
			newNode->next = NULL;  
		}else{
			// 중간에 노드를 추가한다. 
			q->next = newNode;  
			newNode->next = p;  
		}
	}
}
