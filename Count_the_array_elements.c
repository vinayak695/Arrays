#include<stdio.h>
int main(){
    int size,i,length;

    printf("enter the size:");
    scanf("%d",&size);

    int arr[size];

    int count=0;
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
        count++;

    }printf("%d",count);
   

} 
