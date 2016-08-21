#include <cstdio> 
#include <cstdlib> 
using namespace std;  

typedef struct _NODE{
	int Data;  
	struct _NODE *next; 
}NODE; 

NODE *Front,*Rear; 
NODE *ptrNode;  

void Init(){
	Front = (NODE *)malloc(sizeof(NODE)); 
	Rear = (NODE *)malloc(sizeof(NODE)); 
	Front->next = Rear; 
	Rear->next = Rear;  
} 

void Put(int num){
	ptrNode = (NODE *)malloc(sizeof(NODE));  
	ptrNode->Data = num; 
	if (Front->next == Rear){
		Front->next = ptrNode;  
		ptrNode->next = Rear;   
		Rear->next = ptrNode;  
	}else{
		Rear->next->next = ptrNode; 
		ptrNode->next = Rear;  
		Rear->next = ptrNode; 
	}
}

int Get(){
	int ret; 
	NODE *del; 
	if (Front->next == Rear){
		printf("Queue Empty\n");  
	}else{
		del = Front->next;  
		Front->next = del->next;  
		ret = del->Data;  
		printf("get() : %d\n",ret);  
		free(del);  
	}
	return ret; 
}

void DisplayQueue(){
	NODE *ptrTemp; 
	if (Front->next != Rear){
		for (ptrTemp = Front->next; ptrTemp->next != Rear; ptrTemp = ptrTemp->next){
			printf("%d -> ",ptrTemp->Data);  
		}
		printf("%d\n",ptrTemp->Data);  
	}else if (Front->next == Rear){
		printf("Queue Empty\n");  
	}
}

int main(){
	int ret;  
	Init();  
	Put(1); Put(3); Put(5); Put(7);  
	DisplayQueue(); 
	ret = Get(); ret = Get();  
	DisplayQueue();
	return 0; 
}
