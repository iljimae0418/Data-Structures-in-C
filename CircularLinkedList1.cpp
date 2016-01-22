#include <iostream> 
using namespace std; 

struct CLL{
	int data; 
	struct CLL *next;  
};  

int circularListLength(struct CLL *head){
	struct CLL *current = head; 
	int cnt = 0;  
	if (head == NULL){
		return 0; 
	}
	do{
		current = current->next; 
		++cnt;  
	}while (current->next != NULL);  
	return cnt;  
}

int main(){
  // some code 
  return 0; 
}
