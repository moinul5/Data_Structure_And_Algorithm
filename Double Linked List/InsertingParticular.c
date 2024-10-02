#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
};


void addParticular(struct node *head, int n, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    struct node *ptr = head;
    int count = 0;
    while (ptr->next != NULL)
    {
        count++;
        if (n == count)
        {
            temp->link = ptr->link;
            ptr->link = temp;
            break;
        }
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head ->prev = NULL;
    head ->next = NULL;

    
    head -> data = 23;
    addParticular(head,31);

    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
