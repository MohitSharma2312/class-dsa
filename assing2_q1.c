// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// struct node{
//     int data;
//     struct node* next;
// };
// struct node *head = NULL;

// void insert(int data)
// {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp->data= data;
//     temp->next = head;
//     head = temp;
// }
// void print ()
// {
//     struct node *temp = head;
//     while (temp!= NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }
// // void swap ()
// // {
// //     struct node *temp = head;

// // }
// int main()
// {
//     int n;
//     printf("Enter the number of elements in the linked list: ");
//     scanf("%d", &n);

//     int data;
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the element: ");
//         scanf("%d", &data);
//         insert(data);
//     }
//     print();
//     // swap ();
//     // print();
//      return 0;
// }
/* This program swaps the nodes of linked list rather
than swapping the field from the nodes.*/

#include <stdio.h>
#include <stdlib.h>

/* A linked list node */
struct Node {
	int data;
	struct Node* next;
};

/* Function to swap nodes x and y in linked list by
changing links */
void swapNodes(struct Node** head_ref, int x, int y)
{
	// Nothing to do if x and y are same
	if (x == y)
		return;

	// Search for x (keep track of prevX and CurrX
	struct Node *prevX = NULL, *currX = *head_ref;
	while (currX && currX->data != x) {
		prevX = currX;
		currX = currX->next;
	}

	// Search for y (keep track of prevY and CurrY
	struct Node *prevY = NULL, *currY = *head_ref;
	while (currY && currY->data != y) {
		prevY = currY;
		currY = currY->next;
	}

	// If either x or y is not present, nothing to do
	if (currX == NULL || currY == NULL)
		return;

	// If x is not head of linked list
	if (prevX != NULL)
		prevX->next = currY;
	else // Else make y as new head
		*head_ref = currY;

	// If y is not head of linked list
	if (prevY != NULL)
		prevY->next = currX;
	else // Else make x as new head
		*head_ref = currX;

	// Swap next pointers
	struct Node* temp = currY->next;
	currY->next = currX->next;
	currX->next = temp;
}

/* Function to add a node at the beginning of List */
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct Node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}

/* Driver program to test above function */
int main()
{
	struct Node* start = NULL;

	/* The constructed linked list is:
	1->2->3->4->5->6->7 */
	push(&start, 7);
	push(&start, 6);
	push(&start, 5);
	push(&start, 4);
	push(&start, 3);
	push(&start, 2);
	push(&start, 1);

	printf("\n Linked list before calling swapNodes() ");
	printList(start);

	swapNodes(&start, 4, 3);

	printf("\n Linked list after  calling swapNodes() ");
	printList(start);

	return 0;
}
