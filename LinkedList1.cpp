/*function that demonstrates how one 
could traverse the linked list and count how many nodes there are
*/ 
struct ListNode{
  int data; 
  struct ListNode *next;  
};  

int ListLen(struct ListNode *head){
  struct ListNode *current = head; 
  int cnt = 0; 
  while (current != NULL){
    cnt++; 
    current = current->next; 
  } 
  return cnt; 
} 
