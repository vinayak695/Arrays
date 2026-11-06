#include<stdio.h>
int main(){

    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i=0;i<size; i++)
    {
       scanf("%d",&arr[i]);
    }
    {
        int temp;
        temp=arr[0];
        arr[0]=arr[size-1];
        arr[size-1]=temp;
    }    
     for(int i=0; i<size; i++)
    {
        printf("swap elements are:%d",arr[i]);
    }
    }
