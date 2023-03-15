# NumberList Class

The NumberList class is designed to create a linked list of double precision values. It has functions to append a new node to the end of the list, insert a new node at a given position, delete a node with a given value, find a node with a given value, display the list, and delete the entire list.

# Functions

void appendNode(double val): Adds a new node to the end of the list with the given value.
void displayList() const: Prints the values of all nodes in the list.
void insertNode(int pos, double val): Inserts a new node with the given value at the given position.
ListNode \*findNode(double val): Searches the list for a node with the given value and returns a pointer to that node.
int deleteNode(double val): Deletes the first node in the list with the given value and returns 1 if a node was deleted,otherwise 0.
void deleteList(): Deletes all nodes in the list.

# Private Members

ListNode \*head: Pointer to the first node in the list.

# Public Members

struct ListNode: A struct that defines a node in the linked list.
NumberList(): Constructor that initializes the head pointer to null.

# Example Usage

```cpp
myList.appendNode(3.14);
myList.appendNode(2.71);
myList.insertNode(1, 1.62);
myList.displayList(); // Output: 3.14 1.62 2.71
myList.deleteNode(1.62);
myList.displayList(); // Output: 3.14 2.71
myList.deleteList();
myList.displayList(); // Output:
NumberList myList;

```

### Notes

This code is provided as an example and is not meant to be a complete or fully functional implementation of a linked list. Use at your own risk.
