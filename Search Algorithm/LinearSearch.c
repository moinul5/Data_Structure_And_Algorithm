#include <stdio.h>

int  main()
{
    int arr[5] = {1,2,3,4,5};
    int k=0;

    for(int i=0; i<5; i++){
        if(arr[i]==55){
            printf("found");
            k++;
            break;
        }
    }

    if(k==0){
        printf("not found");
    }
}