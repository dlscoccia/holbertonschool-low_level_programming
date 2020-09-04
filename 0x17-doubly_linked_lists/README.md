## What is a doubly-linked list:question:
<img src=https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png
A doubly linked list is a linked data structure that consists of a set of sequentially linked records called nodes. Each node contains two fields, called links, that are references to the previous and to the next node in the sequence of nodes. 
The beginning and ending nodes’ previous and next links, respectively, point typically to null, to facilitate traversal of the list. 
``` bash
/* Node of a doubly-linked list */
struct Node {
    int data;
    struct Node* next; // Pointer to next node in DLL
    struct Node* prev; // Pointer to previous node in DLL
};
```
## How to use:question:
#### Insert Data in the beginning :pushpin:
The prev pointer of first node will always be NULL and next will point to front.
If the node is inserted is the first node of the list then we make front and end point to this node.
Else we only make front point to this node.
<img src=”https://www.studytonight.com/data-structures/images/doubly-linked-list-2.png”>
#### Insert Data in the end :pushpin:
The next pointer of last node will always be NULL and prev will point to end.
If the node is inserted is the first node of the list then we make front and end point to this node.
Else we only make end point to this node.
#### Insert Data before a Node :pushpin:
Let’s say we are inserting node X before Y. Then X’s next pointer will point to Y and X’s prev pointer will point the node Y’s prev pointer is pointing. And Y’s prev pointer will now point to X. We need to make sure that if Y is the first node of list then after adding X we make front point to X.
<img src=”https://www.studytonight.com/data-structures/images/doubly-linked-list-3.png”>
#### Remove a Node :scissors:
Removal of a node is quite easy in Doubly linked list but requires special handling if the node to be deleted is first or last element of the list. Unlike singly linked list where we require the previous node, here only the node to be deleted is needed. We simply make the next of the previous node point to next of current node (node to be deleted) and prev of next node point to prev of current node. Look code for more details.
 
<img src=”https://www.studytonight.com/data-structures/images/doubly-linked-list-5.png”>
 
## Why:question:
**Singly vs Doubly linked list**
|   	| Singly  	|   Doubly	|
|---	|---	|---	|
|Internal implementation|In singly linked list implementation is such as where the node contains some data and a pointer to the next node in the list 	|  While doubly linked list has some more complex implementation where the node contains some data and a pointer to the next as well as the previous node in the list 	|
|Order of elements|Singly linked list allows traversal elements only in one way.|  Doubly linked list allows element two way traversal. 	|
|Usage|Singly linked list are generally used for implementation of stacks|On other hand doubly linked list can be used to implement stacks as well as heaps and binary trees.|
|Index performance| Singly linked list is preferred when we need to save memory and searching is not required as pointer of single index is stored.|  If we need better performance while searching and memory is not a limitation in this case doubly linked list is more preferred. 	|
|Memory consumption|As singly linked list store pointer of only one node so consumes lesser memory.|  On other hand Doubly linked list uses more memory per node(two pointers). 	|
___
Notes:
 
 ``` bash
//This link always points to first Link
struct node *head = NULL;
//This link always points to the last Link
struct node *last = NULL;
 ```
___
> **Science is a beautiful gift to humanity; we should not distort it.**
> *- A. P. J. Abdul Kalam*
___
