#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
};

struct node *addBeg(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp ->prev = NULL;
    temp ->next = head;
    head->prev = temp;
    head = temp;
    return head;
 }

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head ->prev = NULL;
    head ->next = NULL;

    
    head -> data = 23;
    head = addBeg(head,31);

    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
