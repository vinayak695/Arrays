#include<stdio.h>
int main(){
    int size;
    int num;

    printf("enter the size:");
    scanf("%d",&size);

    printf("enter the number to find repeat:");
    scanf("%d",&num);

    int arr[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter the number");
    scanf("%d",&num);

    int count=0;
    for(int i=0; i<size;i++)
    {
     if(num==arr[i])
        count++;
    }printf("repeated number is %d",count);
}