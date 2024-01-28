#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* pNext;
};

void addLastNode(struct Node** head , int data){
	struct Node * newNode = (struct Node*)malloc(sizeof(struct Node*));
	newNode->data = data;
	newNode->pNext = NULL;
	
	if(*head == NULL){
		*head = newNode;
		return;
	}
	
	struct Node* last = *head;
	while(last->pNext != NULL){
		last = last->pNext;
	}
	
	last->pNext = newNode;
}

void addFirstNode(struct Node ** head , int data){
	struct Node * newNode = (struct Node*)malloc(sizeof(struct Node*));
	newNode->data = data;
	newNode->pNext = *head;
	*head = newNode;
}

void print(struct Node * node){
	while(node!= NULL){
		printf("%d", node->data);
		node = node->pNext;
	}
	printf("\n");
}
int main(){
	struct Node* head = NULL;
	addLastNode(&head,10);
	addLastNode(&head,20);
	addFirstNode(&head,30);
	print(head);
}
