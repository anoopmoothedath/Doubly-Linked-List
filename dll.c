#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node * NODE;


NODE createNode(){
	NODE temp;
	temp = (NODE)malloc(sizeof(struct node));
	temp->next = NULL;
	temp->prev = NULL;
	return temp;
}

NODE insertAtBegin(NODE first, int data){
	NODE temp;
	temp = createNode();
	temp->data = data;
	if(first != NULL){
		temp->next = first;
		first->prev = temp;
	}
	first = temp;
	return first;
}

NODE insertAtEnd(NODE first, int data){
	NODE lastnode = first;
	NODE temp;
	temp = createNode();
	temp->data = data;
	
	if(first == NULL){
		first = temp;
	}else{
		while(lastnode->next != NULL){
			lastnode = lastnode->next;
		}
		lastnode->next = temp;
		temp->prev = lastnode;
	}
	return first;
}

NODE insertAtPosition(NODE first, int position, int data){
	int i;
	NODE temp, last = first;
	if(position <= 0 || first == NULL && position > 1){
		printf("\tNo such position in DLL so insertion is not possible\n");
		return first;
	}
	
	for(i = 1; i < (position - 1); i++){
		if(last->next != NULL){
			printf("\tNo such position in DLL so insertion is not possible\n");
			return first;
		}
		last = last->next;
	}
	
	temp = createNode();
	temp->data = data;
	
	if(position == 1){
		if(first != NULL){
			temp->next = first;
			first->prev = temp;
		}
		first = temp;
		}
		else{
			temp->next = last->next;
			last->next = temp;
			temp->prev = last;
	}
	return first;
}

NODE deleteFromBegin(NODE first){
	NODE lastnode = first;
	if(lastnode->next == NULL){
		first = NULL;
	}
	else{
		first = first->next;
		first->prev = NULL;
	}
	printf("\tThe deleted element from DLL : %d\n",lastnode->data);
	free(lastnode);
	return first;
}

NODE deleteFromEnd(NODE first){
	NODE lastnode = first;
	NODE temp;
	if(first->next == NULL){
		first = NULL;
	}else{
		while(lastnode->next != NULL){
			temp = lastnode;
			lastnode = lastnode->next;
		}
		temp->next = NULL;
	}
	printf("\tThe deleted element from DLL : %d\n",lastnode->data);
	free(lastnode);
	return first;
}

int countDLL(NODE first){
	NODE temp;
	temp = createNode();
	int sum = 0;
	while(temp != NULL){
		sum = sum + 1;
		temp = temp->next;
	}
	return sum;
}

void traverseList(NODE first){
	NODE lastnode = first;
	while(lastnode != NULL){
		printf("%d <--> ", lastnode->data);
		lastnode = lastnode->next;
	}
	printf("NULL\n");
}
