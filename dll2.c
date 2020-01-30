#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include "dll.c"

void main(){
	NODE first = NULL;
	int x, op, pos;
	while(1){
		printf("\n      -----------------------");
		printf("\n\tDOUBLY LINKED LIST");
		printf("\n      -----------------------");
		printf("\n\t1.Insert at end.\n\t2.Insert at beginning.\n\t3.Insert at specific position.");
		printf("\n\t7.Count the no.of nodes.\n\t8.Traverse the list.\n\t9.Exit.");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("\n\tEnter an element : ");
				scanf("%d", &x);
				first = insertAtEnd(first, x);
				break;
			case 2:
				printf("\n\tEnter an element : ");
				scanf("%d", &x);
				first = insertAtBegin(first, x);
				break;	
			case 3:
				printf("\n\tEnter a position : ");
				scanf("%d", &pos);	
				printf("\n\tEnter an element : ");
				scanf("%d", &x);
				first = insertAtPosition(first, pos, x);
				break;
			case 7:
				printf("\tThe number of nodes in a DLL are : %d\n", countDLL(first));
				break;
			case 8:
				if(first == NULL){
					printf("\tDouble Linked List is empty.\n");
				}
				else{
					printf("\tThe elements in the list are : ");
					traverseList(first);
				}	
				break;
			case 9:
				exit(0);
				break;	
		}
	}
}

