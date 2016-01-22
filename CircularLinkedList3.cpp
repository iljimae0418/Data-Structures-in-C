#include <iostream> 
#include <cstdio> 
using namespace std; 


struct CLL{
	int data; 
	struct CLL *next;  
}; 

void insertAtEndInCLL(struct CLL **head, int data){
	struct CLL *current = *head; 
	struct CLL *newNode = (struct CLL *)(malloc(sizeof(struct CLL)));  
	if (!newNode){
		printf("Memory Error!\n"); 
		return;  
	} 
	newNode->data = data;  
	while (current->next != NULL){
		current = current->next;  
	}
	newNode->next = newNode;  
	if (*head == NULL){
		// i.e. if the circular linked list is empty to start with. 
		*head = newNode; 
	}else{
		newNode->next = *head; 
		current->next = newNode;  
	}
	return;  
}

int main(){
	// some code.
	return 0; 
}
