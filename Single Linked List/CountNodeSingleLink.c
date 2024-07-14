#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *link;
};

void count_node(struct node *head)
{
    int count =0;
    if(head == NULL) printf("head is empty");

    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        count++;
        ptr  = ptr -> link;
    }

    printf("total node %d",count);
    

}

int main()
{
    struct node *head =  malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));

    head->data = 5;
    head ->link = second;

    second ->data = 93;
    second -> link = third;

    third -> data = 73;
    third -> link = NULL;

    count_node(head);
}