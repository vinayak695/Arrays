#include<stdio.h>
int main(){
    
    int size;
    scanf("%d",&size);
    
    int arr[size];

    printf("Enter the first array");
    
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the second array");

    int arr1[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr1[i]);
    }

    int flag=1;
    for(int i=0; i<size; i++)
    {
        if (arr[i]!=arr1[i])
            {
                flag=0;
                break;
            }
    }        

       if (flag==1)     
     {
         printf("array elements are equal");
     }
     else
     {
         printf("array elements are  not equal");
     }
     
}   