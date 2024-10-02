#include <stdio.h>

#define Max 100

int Stack_arr[Max];
int top = -1;

int isEmpty(){
    if(top == -1) return 1;
    
    return 0;
}

int isFull()
{
    if(top == Max-1) return 1;
    
    return 0;
}

void push(int val)
{
    if(isFull())
    {
        printf("OverFlow");
        return;
    }
    top++;
    Stack_arr[top] = val;
}

int pop(){
    if(isEmpty())
    {
        printf("underFlow");
        return;
    }
    int value;
    value = Stack_arr[top];
    top--;
    return value;
}

void BinaryToDecmal(int dec){
    while(dec != 0){
        push(dec%2);
        dec = dec/2;
    }
}

void print()
{
    if(isEmpty()){
        printf("Stack Underflow.");
        exit(1);
    }
    while(!isEmpty())
    {
        printf("%d",pop());
    }
}

int main()
{
    int dec;
    printf("Enter the decimal number: ");
    scanf("%d",&dec);
    BinaryToDecmal(dec);
    print();
    
}