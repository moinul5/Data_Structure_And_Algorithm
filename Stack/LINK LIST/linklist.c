#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

int isEmpty(struct node *head){
    if(head == NULL) return 1;
    return 0;
}

void pop(struct node **head)
{
    if(isEmpty(*head)) return;
    struct node* ptr;
    ptr = *head;
    *head = ptr->link;
    free(ptr);
    ptr = NULL;
}

void push(struct node **head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = *head;
    *head = ptr;
}

int peek(struct node *head)
{
    if(isEmpty(head)){
        printf("stack underflow");
        exit(1);
    }
    return head->data;

}

int main()
{
    struct node *head;
    struct node *second ;
    struct node *third ;
    head  =  malloc(sizeof(struct node));
    second  =  malloc(sizeof(struct node));
    third  =  malloc(sizeof(struct node));
    head->data= 50;
    second->data= 100;
    third->data= 150;
    head->link = second;
    second->link = third;
    third->link = NULL;
    
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    pop(&head);
    push(&head, 1010);

    ptr = head;
    while(ptr != NULL)
    {
        printf(" ** %d ",ptr->data);
        ptr = ptr->link;
    }
}
