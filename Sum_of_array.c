#include<stdio.h>
int main(){

    int size,average;

    scanf("%d",&size);
    int arr[size];

    printf("enter the elements:");

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);  
    }
     int sum=0;

    for(int i=0; i<size; i++){

     sum = sum+arr[i];
     average = sum/arr[i];     
    
    }printf("sum is :%d",sum);
    printf("\n average is :%d",average);

}