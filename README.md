# Doubly-Linked-List
This is a C program for doubly linked list. This DLL program has various operations : 
* Insertion (at the beginning, at end & at specific position)
* Deletion (from beginning & end)
* Count of the nodes
* Traversal of DLL

# Algorithms

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
