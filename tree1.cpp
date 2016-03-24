#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring> 
#include <queue> 
#include <algorithm> 
using namespace std; 

struct node{
	int data; 
	struct node *left; 
	struct node *right; 
}; 

struct node *newNode(int data){
	struct node *node = (struct node *)malloc(sizeof(struct node)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 
	return node; 
}

void preOrder(struct node *root){
	if (root == NULL){
		return; 
	}
	preOrder(root->left);  
	preOrder(root->right); 
	cout << root->data << " ";  
}

void levelOrder(struct node *root){
	struct node *temp; 
	queue<struct node *> q;  
	if (root == NULL) return;  
	q.push(root);  
	while (!q.empty()){
		temp = q.front(); q.pop(); 
		cout << temp->data << " "; 
		if (temp->left) q.push(temp->left);  
		if (temp->right) q.push(temp->right); 
	}
}

int main(){
	struct node *root = newNode(1);  
	root->left = newNode(2); 
	root->right = newNode(3); 
	preOrder(root); 
	cout << endl;
	levelOrder(root); 
	cout << endl; 
	return 0; 
}
