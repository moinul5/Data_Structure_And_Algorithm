#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
};

void addEnd(struct node* head, int data)
{
    struct node *tp = malloc(sizeof(struct node));
    struct node *temp = head;
    tp -> data = data;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    tp ->prev = temp;
    temp -> next = tp;
    tp ->next = NULL;

 }

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head ->prev = NULL;
    head ->next = NULL;
    head -> data = 23;
    addEnd(head,31);



    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
