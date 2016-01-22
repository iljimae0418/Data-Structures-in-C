#include <iostream> 
#include <cstdlib> 
#include <cstring> 
using namespace std; 

struct DLL{
	int data; 
	struct DLL *next;  
	struct DLL *prev; 
}; 

void DLLDelete(struct DLL **head, int position){
	int k = 1;  
	struct DLL *temp, *temp2; 
	temp = *head; 
	if (position == 1){
		// deleting the first node in the list. 
		*head = head->next; 
		if (head != NULL){
			head->prev = NULL; 
		} 
		free(temp);  
		return;
	}
	while ((k < position-1) && (temp->next != NULL)){
		temp = temp->next; 
		++k;  
	}
	if (temp->next == NULL){
		// deleting the last node in the list.  
		temp2 = temp->prev; 
		temp2->next = NULL; 
		free(temp); 
	}else{
		// deleting the node in between two nodes
		temp2 = temp->prev; 
		temp2->next = temp->next;  
		temp->next->prev = temp2;  
		free(temp);  
	}
	return;
}

int main(){
	// some code. 
	return 0; 
}
