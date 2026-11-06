#include<stdio.h>
int main(){
    printf("enter the size:");
    int size;
    scanf("%d",&size);

    int arr[size];
    printf("enter the element:\n");

    for(int i=0 ; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum=0;
    int average;
    for(int i=0; i<size; i++)
    {
        sum=sum+arr[i];
        average=sum/size;
    }
    printf("average is:%d",average);
}                                   