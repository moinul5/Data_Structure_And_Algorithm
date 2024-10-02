#include <stdio.h>
#define Max 4

int stack_arr[Max];
int top = -1;

void push(int data)
{
    if(top == Max-1)
    {
        printf("Stack overflow");
        return;
    }
    top++;
    stack_arr[top] =data;
}

int pop()
{
    if(top == Max-1) return;
    int value;
    value = stack_arr[top];
    top--;
    return value;
}

int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    for(int i=0; i<top; i++){
        printf("%d ",stack_arr[i]);
    }
    printf("%d",data);
}
