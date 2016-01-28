// deleting the very end node of the circular linked list. 
#include <iostream> 
#include <cstdio> 
#include <cstdlib> 
using namespace std; 

struct CLL{
	int data; 
	struct CLL *next; 
}; 	

void DeleteLastNodeFromCLL(struct CLL **head){
	struct CLL *temp = *head;  
	struct CLL *current = *head; 
	if (*head == NULL){
		printf("List Empty\n");  
		return; 
	}
	while (current->next != *head){
		temp = current; 
		current = current->next; 
	}
	temp->next = *head; 
	free(current);
	return; 
}
