#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int num;
    printf("enter the number to replace:");
    scanf("%d",&num);

    arr[2]=num;

    printf("updated elements are:");
    for(int i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }
     
}