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
