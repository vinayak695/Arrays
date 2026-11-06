#include<stdio.h>
int main(){

    printf("enter the size:");

    int size;
    scanf("%d",&size);

    printf("enter the element:\n");

    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements are :");
    for(int i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }

}