#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link; 
};

int main()
{
    // Allocate memory for nodes
    struct node  *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));

    //First node or head nodes
    head -> data = 28;
    head ->link = second;

    //Second node of the linked list with address of third node
    second -> data = 98;
    second -> link = third;

    //Third node
    third -> data = 3;
    third -> link = NULL;    


    printf ("%d ",head -> data); // accessing the first node data
    printf ("%d ",second -> data); // accessing the second node data
    printf ("%d ",head ->link->data); // accessing the second node data
    printf ("%d ",head ->link ->link -> data);// accessing the third node data
    
    

}