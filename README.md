# Doubly-Linked-List
This is a C program for doubly linked list. This DLL program has various operations : 
* Insertion (at the beginning, at end & at specific position)
* Deletion (from beginning & end)
* Count of the nodes
* Traversal of DLL

# Algorithms

## Insertion in the beginning
````
insertAtBeginInDLL(NODE first, int x)
Step-1: Allocate memory to the node temp.
Step-2: Store an integer value into data field of node temp.
Step-3: If first != NULL then goto Step-4 else goto Step-6.
Step-4: Assign the address contained in the first node to the next field of temp.
Step-5: Assign the address contained in the temp node to the prev field of first.
Step-6: Now treat the temp node as first node.
Step-7: Finally return the first node.
````

## Insertion at the end
````
insertAtEndInDLL(NODE first, int x)
Step-1: Declare a NODE lastNode and assign first to it.
Step-2: Allocate memory to the NODE temp.
Step-3: Store an integer value into data field of NODE temp.
Step-4: If the first is referenced to NULL then assign temp to first node.
		Otherwise 
			1. Traverse the list up to the last node (meaning the next field of a node contains Null).
			2. Assign the temp node to next field of the lastNode and assign lastNode to prev field of temp.
Step-4: Finally return the first node
````

## Insert at specific position
````
insertAtPositionInDLL(NODE first, int position, int x)
Step-1: If position is less than or equal to 0 or (First == NULL && position > 1), Print "No such position in DLL so insertion is not possible" else go to Step-2.
Step-2: Assign first to a node last.
Step-3: Move the previous node of the last node of the given position by iteration when the given position is there in DLL,
		Otherwise print "No such position in DLL so insertion is not possible" and return first node.
Step-3: Allocate memory to the node temp.
Step-4: Store an integer value into data field of node temp.
Step-5: If the given pos is 1 then
			If first != NULL then 
				1. Assign first to next field of temp node and next assign temp to prev field of first.
			Otherwise
				1. Assign temp to first.
		Otherwise if last == NULL then
			1. Print  "No such position in DLL so insertion is not possible" and return first.
		Otherwise
			1. Assign next field of last to next field of temp node.
			2. Assign last to prev filed of temp.
			3. If next field of last != NULL , then assign temp to prev field of last->next.
			4. Assign temp to next field of last .
Step-6: Finally return the first node.
````

## Delete from beginning
````
deleteAtBeginInDLL(NODE first)
Step-1: Assign first node to the node lastNode
Step-2: If  next next field of lastNode equal to NULL [i.e It is the only node in the list] then make first equal to NULL [Making List Empty].
		Otherwise
			Assign next of first node to first [first will point to second node now].
			Make first -> prev  to NULL [first node's prev should be NULL always].
Step-3: Print "The deleted element from DLL : data field of lastNode".
Step-4: Free the memory allocated to the lastNode node.
Step-5: Return the first node
````

## Delete from end
````
deleteAtEndInDLL(NODE first)
Step-1: Assign first node to the node lastNode.
Step-2: If only one node in the list then assign NULL to first and goto Step-5, otherwise goto Step-3.
Step-3: Traverse the list up to the last node of the list (meaning move lastNode to the last node of the list) 
		and place temp node as previous of the lastNode.
Step-4: Store NULL in the next field of temp.
Step-5: print "The deleted element from DLL : data field of lastNode".
Step-6: Free the memory space of lastNode.
Step-7: Finally return the first node.
````

## Count the nodes in DLL
````
countInDLL(NODE first)
Step-1: Assign the address contained in first node to temp node.
Step-2: Initialize a variable sum to 0 (zero).
Step-3: Repeat Step-4 and Step-5 until temp reaches the NULL .
Step-4: Increment the sum by 1.
Step-5: Move to the next node by placing the address of the next node in temp node.
Step-6: Finally return sum.
````

## Traversal
````
traverseListInDLL(NODE first)
Step-1: Assign the address contained in first node to lastNode node.
Step-2: Repeat Step-3 and Step-4 until lastNode is NULL.
Step-3: Print the data field of the lastNode.
Step-4: Move to the next node by placing the address of the next node of lastNode into the lastNode node.
Step-5: Finally print "NULL" at the end of the list.
````
