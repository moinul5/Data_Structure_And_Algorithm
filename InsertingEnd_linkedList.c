#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void addToEnd(struct node *head, int data)
{
    struct node *ptr,*temp;
    ptr = head;

    temp = malloc(sizeof(struct node));
    temp ->data = data;
    temp -> link = NULL;

    while(ptr->link != NULL)
    {
        ptr = ptr-> link;
    }

    ptr->link = temp;
    
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *current = malloc(sizeof(struct node));

    head->data = 23;
    head->link = current;

    current->data = 75;
    current->link = NULL;

    current = malloc(sizeof(struct node));
    current->data = 34;
    current->link = NULL;
    head->link->link = current;

    addToEnd(head,200);

    struct node *ptr;
    ptr = head;

    while(ptr!= NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr -> link;
    }
}