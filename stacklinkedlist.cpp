// by Minsuk Kim
#include <iostream> 
#include <cstdlib> 
#include <cstdio> 
using namespace std; 

typedef struct _NODE{
	int data;  
	struct _NODE *next; 
}node;  

node *head,*tail;  
node *ptrNode;  

void init(){
	head = (node *)malloc(sizeof(node)); 
	tail = (node *)malloc(sizeof(node)); 
	head->next = tail; 
	tail->next = tail;  
}

void push(int num){
	ptrNode = (node *)malloc(sizeof(node)); 
	ptrNode->data = num;  
	ptrNode->next = head->next; 
	head->next = ptrNode;  
}

int pop(){
	if (head->next == tail){
		printf("empty\n"); 
	}
	ptrNode = (node *)malloc(sizeof(node)); 
	ptrNode = head->next; 
	head->next = head->next->next;  
	int ret = ptrNode->data;  
	free(ptrNode); 
	return ret;  
}

void display(){
	node *idx; 
	printf("head->");  
	for (idx = head->next; idx != tail; idx = idx->next){
		printf("%d->",idx->data); 
	}
	printf("tail\n");   
}

int main(){
	init();  
	pop();  
	for (int i = 1; i <= 5; i++){
		push(i); 
	}
	display();  
	printf("%d\n",pop()); 
	display();  
	return 0; 
}
