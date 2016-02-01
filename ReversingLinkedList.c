#include <stdio.h> 
#include <stdlib.h> 

struct node{
	int data; 
	struct node *next;  
}; 

// function to reverse linked list. 
void reverse(struct node **head){
	struct node *prev = NULL; 
	struct node *current = *head; 
	struct node *next; 
	while (current != NULL){
		next = current->next; 
		current->next = prev; 
		prev = current; 
		current = next;  
	}
	*head = prev; 
}

// function to push the node 
void push(struct node **head, int data){
	struct node *newNode = (struct node*)malloc(sizeof(struct node)); 
	newNode->data = data;  
	// link the old list off the new node 
	newNode->next = *head; 
	// move the head to point to the new node. 
	*head = newNode;  
}

void printList(struct node *head){
	struct node *temp = head; 
	while (temp != NULL){
		printf("%d ",temp->data);  
		temp = temp->next;  
	}
	printf("\n"); 
}

int main(){
	struct node *head = NULL; 
	push(&head,20);  
	push(&head,4);  
	push(&head,15); 
	push(&head,85);  
	printList(head);  
	reverse(&head); 
	printf("reversed list:\n");  
	printList(head); 
	return 0;  
}
