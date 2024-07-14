#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};


struct node* addBegining(struct node *head , int data) // here struct node* because temp is the pointer to a node
{
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = head;
    head  = temp;
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 20;

    head -> link = ptr;
    ptr ->link = NULL;

    head = addBegining(head,50);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ",ptr -> data);
        ptr = ptr-> link;
    }
}
