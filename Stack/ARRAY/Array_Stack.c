#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int  isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1 ;
    }

    else{
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if(isFull(ptr)){
        printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr)){
        printf("Stack underflow!");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val ;
    }

}

int peek(struct stack *sp, int i)
{
    if(sp->top-i+1<0)
    {
        printf("Not a valid position");
        return -1;
    }

    else{
        return sp->arr[sp->top-i+1];
    }
}


int main(){
    struct stack *sp = (struct stack*)malloc (sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr =(int*)malloc (sp->size *sizeof(int));
    push(sp,1);
    push(sp,12);
    push(sp,133);
    for(int i=0;i<10;i++){
        printf("%d ",sp->arr[i]);
    }

}