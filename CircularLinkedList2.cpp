#include <iostream> 
using namespace std; 

struct CLL{
	int data;  
	struct CLL *next; 
}; 

void printCLL(struct CLL *head){
	struct CLL *current = head; 
	if (head == NULL){
		return;  
	}
	do{
		printf("%d\n",current->data);  
		current = current->next;  
	}while(current->next != NULL);  
	return;  
}
