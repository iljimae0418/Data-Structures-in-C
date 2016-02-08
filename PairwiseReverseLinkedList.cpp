#include <iostream> 
#include <cstdio> 
#include <cstdlib> 
using namespace std; 

struct ListNode{
	int data; 
	struct ListNode *next;  
};  


void addNodes(struct ListNode **head, int data){
	struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));  
	newNode->data = data;  
	newNode->next = *head;  
	*head = newNode;  
}

void printList(struct ListNode *head){
	struct ListNode *temp = head; 
	while (temp != NULL){
		printf("%d ",temp->data); 
		temp = temp->next; 
	}
	printf("\n");  
}

void ReversePairRecursive(struct ListNode *head){
	struct ListNode *temp; 
	if (head == NULL || head->next == NULL){
		// if the list is empty or has only 1 node 
		return; 
	}else{
		// flip first pair. 
		temp = head->next; 
		head->next = temp->next; 
		temp->next = head;  
		// do this recursively. 
		ReversePairRecursive(head->next); 
	}
}

int main(){
	// some code. 
	return 0; 
}
