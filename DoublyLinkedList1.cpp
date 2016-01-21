// inserting node in doubly linked list.
// just an exmaple code 
#include <iostream> 
#include <cstdio> 
using namespace std; 

struct DLL{
	int data; 
	struct DLL *next;  
	struct DLL *prev; 
};

void insert(struct DLL **head, int data, int position){
	int k = 1;  
	struct DLL *temp, *newNode;  
	newNode = (struct DLL *)malloc(sizeof(struct DLL));  
	if (!newNode){
		// check for memory error 
		printf("memory error!\n");
		return;    
	}
	newNode->data = data;  
	if (position == 1){
		// inserting node at the very front. 
		newNode->next = *head;  
		newNode->prev = NULL; 
		*head->prev = newNode;  
		*head = newNode;  
	}else{
		temp = *head;  
		while ((k < position-1) && (temp->next != NULL)){
			temp = temp->next; 
			++k;  
		}
		if (temp->next == NULL){
			// inserting node at the very end.  
			temp->next = newNode;  
			newNode->next = NULL; 
			newNode->prev = temp; 
		}else{
			// inserting node in between two nodes. 
			newNode->next = temp->next;
			newNode->prev = temp; 
			temp->next->prev = newNode; 
			temp->next = newNode;  
		}
	}
	return;  
}

int main(){
  // do something
  return 0; 
}
