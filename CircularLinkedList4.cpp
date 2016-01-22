#include <cstdio> 
#include <iostream> 
using namespace std; 

struct CLL{
	int data; 
	struct CLL *next; 
};  

void InsertAtBeginInCLL(struct CLL **head, int data){
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
		*head = newNode; 
	}else{
		newNode->next = head; 
		current->next = newNode;  
		*head = newNode;  
	}
	return; 
}

int main(){
	// some code 
	return 0; 
}
