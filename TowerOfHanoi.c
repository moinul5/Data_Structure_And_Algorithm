#include <stdio.h>
int x1,x2;

int TowerOfHanoi(int n, int s, int d, int a)
{
    if(n==1)
    {
        printf("move disk from %d to %d",s,d);
        return 1;
    }
    else{

    TowerOfHanoi(n-1,s,a,d);
    printf(" %d -> %d \n",s,d);
    TowerOfHanoi(n-1,a,d,s);
    
    }
}
int main()
{
    TowerOfHanoi(5,1,2,3);
}