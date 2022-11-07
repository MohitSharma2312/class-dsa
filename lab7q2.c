#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

void print()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("  ");
}

void assending()
{
    struct node *temp = head;
    printf("Assending order: ");
    while (temp != NULL)
    {
        struct node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->data > temp2->data)
            {
                int t = temp->data;
                temp->data = temp2->data;
                temp2->data = t;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}

void decending()
{
    struct node *temp = head;
    printf("\nDecending order: ");
    while (temp != NULL)
    {
        struct node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->data < temp2->data)
            {
                int t = temp->data;
                temp->data = temp2->data;
                temp2->data = t;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}

 
int main()
{
    int n;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    int data;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &data);
        insert(data);
    }
    assending();
    print();
    decending();
    print();
    return 0;
}