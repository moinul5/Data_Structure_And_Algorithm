#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *addNode(struct node *tail, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    tail->link = temp;

    return temp;
}

struct node *del_node_end(struct node *head)
{
    struct node *temp = head;
    struct node *temp2 = head;
    if (head == NULL)
    {
        printf("The list is already empty");
    }

    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }

    else
    {
        while (temp->link != NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }

    return head;
}

struct node *del_first_node(struct node *head)
{
    struct node *temp = head;
    head = head->link;
    free(temp);
    temp = NULL;
    return head;
}

struct node *del_particular(struct node *head, int position)
{
    if (head == NULL)
    {
        printf("List is already empty");
    }

    else if(position == 1)
    {
        head = del_first_node(head);
    }

    else{
        struct node *temp = head;
        struct node *temp2 = head;
        int count =1;
        while (temp ->link != NULL)
        {
            count ++;
            temp2 = temp;
            temp = temp->link;
            if(count == position)
            {
                temp2->link = temp->link;
                free(temp);
                temp = NULL;
                break;
            }
        }
        
    }

    return head;
}



struct node* deleteAll(struct node *head) // This function is deleting all node from the linked list 
{
    struct node *temp = head;
    while(temp != NULL)
    {
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
}


int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int a;
    struct node *head = malloc(sizeof(struct node));
    struct node *tail = head;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (i == 0)
        {
            head->data = a;
            head->link = NULL;
        }

        else
        {
            tail = addNode(tail, a);
        }
    }

    a = 0;
    while (a != 5)
    {

        printf("1. Detele the first node\n2. Delete the last node\n3. Delete the particular node\n4. Delete the whole node\n5.End task\n");
        scanf("%d", &a);
        if (a == 1)
        {
            head = del_first_node(head);
        }

        else if (a == 2)
        {
            head = del_node_end(head);
        }

        else if (a == 3)
        {
            int z;
            printf("Enter the position of the node for delete: ");
            scanf("%d", &z);
            head = del_particular(head, z);
            printf("\n");
        }

        else if (a == 4)
        {
           head=  deleteAll(head);
           if(head == NULL)
            {
                printf("List is succesfully empty");
            }
        }

        tail = head;
        while (tail != NULL)
        {
            printf("%d ", tail->data);
            tail = tail->link;
        }
        printf("\n");
    }
}


