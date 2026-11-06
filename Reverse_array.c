#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
      
    printf("Reverse Elements are:");

        for(int i=0; i<size/2; i++)
        {
            
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
       
        }

        for(int i=0; i<size; i++)
        {
            printf("%d",arr[i]);
        }
}