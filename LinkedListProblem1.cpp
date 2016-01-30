// finding the nth node from the end of the list 
// with just one search (time complexity: O(n))
#include <iostream> 
#include <cstdlib> 
#include <algorithm> 
using namespace std; 

struct ListNode{
	int data; 
	struct ListNode *pNext; 
}; 

struct ListNode *NthNodeFromEnd(struct ListNode *head, int NthNode){
	struct ListNode *pTemp = NULL, *pNthNode = NULL; 
	int count = 0; 
	for (pTemp = head; pTemp != NULL;){
		count++; 
		if (NthNode-count == 0){
			pNthNode = head; 
		}else if (NthNode-count < 0){
			pNthNode = pNthNode->pNext;  
		}
		pTemp = pTemp->next; 
	}
	if (pNthNode) return pNthNode;  
	return NULL;  
}

int main(){
	// some code 
	return 0; 
}
