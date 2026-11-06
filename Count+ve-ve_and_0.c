#include<stdio.h>
int main(){

    int size;

    printf("enter the size");
    scanf("%d",&size);

    int arr[size];
    printf("enter the elements:");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int positive=0,negative=0,zero=0;

    for(int i=0; i<size; i++)
    {
      if(arr[i]>0)
      {
        positive++;
      }else if(arr[i]<0)
      {
        negative++;
      }
      else
      {
        zero++;
      }
    }
    printf("positive numbers are:%d",positive);
    printf("\nnegative numbers are:%d",negative);
    printf("\nzero numbers are:%d",zero);
}    