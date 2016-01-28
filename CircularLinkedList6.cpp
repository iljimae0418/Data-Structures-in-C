// deleting the first node in circular linked list. 
#include <iostream> 
#include <cstdio> 
#include <cstring> 
using namespace std; 

struct CLL{
	int data; 
	struct CLL *next; 
}; 

void DeleteFirstNode(struct CLL **head){
	struct CLL *temp = *head; 
	struct CLL *current = *head; 
	if (*head == NULL){
		printf("List Empty\n"); 
		return; 
	}
	while (current->next != *head){
		current = current->next; 
	}
	current->next = *head->next; 
	*head = *head->next; 
	free(temp); 
	return; 
}

int main(){
	// some code; 
	return 0; 
}
