#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    printf("enter the elements");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int replace;
    printf("enter the element to replace");
    scanf("%d",&replace);

     int new;
    printf("enter the new elements to replace");
    scanf("%d",&new);


    for(int i=0; i<size; i++)
    {
        if(replace==arr[i])
        {
            arr[i]=new;
        }
    }
    
    for(int i=0; i<size; i++)
    {
          printf("%d ",arr[i]);
    }
}