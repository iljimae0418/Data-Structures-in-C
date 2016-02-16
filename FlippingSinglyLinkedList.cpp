// actual implementation 
#include <iostream>
#include <cstdio> 
using namespace std; 

struct ListNode{
	int data; 
	struct ListNode *next; 
}; 

struct ListNode *ReverseList(struct ListNode *head){
	struct ListNode *prev = NULL, *next = NULL;  
	while (head){
		next = head->next;  
		head->next = prev; 
		prev = head; 
		head = next; 
	}
	return (prev); 
}

void add(struct ListNode **head, int data){
	struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode *));  
	newNode->data = data; 
	newNode->next = *head; 
	*head = newNode; 
}

void printNodes(struct ListNode *head){
	struct ListNode *temp = head;  
	while (temp != NULL){
		printf("%d ",temp->data);  
		temp = temp->next; 
	}
	printf("\n"); 
}

int main(){
	struct ListNode *head = NULL; 
	add(&head,3);  
	add(&head,2);
	add(&head,1); 
	printNodes(head);  
	struct ListNode *newHead = ReverseList(head); 
	printNodes(newHead); 
	return 0; 	
}
