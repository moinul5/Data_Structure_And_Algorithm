#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

// time complexity for this function is O(1)
struct node* addToEnd(struct node *ptr , int data) // here struct node* because temp is the pointer to a node
{
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;
    ptr-> link = temp;
    return temp;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link =NULL;

    struct node *ptr  = head;

    ptr = addToEnd(ptr,34);
    ptr = addToEnd(ptr,38);
    ptr = addToEnd(ptr,555);
    ptr = addToEnd(ptr,3832);
    ptr = addToEnd(ptr,3814);
    ptr = addToEnd(ptr,38352678);
    ptr = addToEnd(ptr,38231);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ",ptr -> data);
        ptr = ptr-> link;
    }
}
