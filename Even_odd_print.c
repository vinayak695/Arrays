#include<stdio.h>
int main(){

    int size,i;

    printf("enter the size:");
    scanf("%d",&size);

    int arr[size];
    int arr1[size];
    int arr2[size];


    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int even=0;
    int odd=0;

    
    for(i=0; i<size ;i++)
    {
        if (arr[i] % 2 == 0)
    {
        arr1[even]=arr[i];
        even++;
    }
    else
    {
        arr2[odd]=arr[i];
        odd++;
    }
}    printf("even elements are:");
    for(int i=0; i<even; i++)
    {
        printf("%d",arr1[i]);
    } 
    
    printf("\n odd elements are:");
    for(int i=0; i<odd; i++)
    {
        printf("%d",arr2[i]);
    } 
     
}    


