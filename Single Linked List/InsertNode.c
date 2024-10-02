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

struct node *addBegging(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = head;
    head = temp;
    return head;
}

void addToEnd(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    struct node *ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = temp;
}

void addParticular(struct node *head, int n, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    struct node *ptr = head;
    int count = 0;
    while (ptr->link != NULL)
    {
        count++;
        if (n == count)
        {
            temp->link = ptr->link;
            ptr->link = temp;
            break;
        }
        ptr = ptr->link;
    }
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

    int z = 1;

    while (z != 4)
    {
        printf("\n");
        printf("Select One: \n");
        printf("1. Add node at begging\n2. Add node at End\n3.Add node at any place\n4. End task and print\n");
        printf("Enter number: ");
        scanf("%d", &z);
        if (z == 1)
        {
            int data;
            printf("Enter the number: ");
            scanf("%d", &data);
            printf("\n");
            head = addBegging(head, data);
        }

        else if (z == 2)
        {
            int data;
            printf("Enter data to insert end of the list: ");
            scanf("%d", &data);
            printf("\n");
            addToEnd(head, data);
        }

        else if (z == 3)
        {
            int data;
            printf("Enter the node insert after the node: ");
            scanf("%d", &n);
            printf("Enter the data: ");
            scanf("%d", &data);
            printf("\n");
            addParticular(head, n, data);
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