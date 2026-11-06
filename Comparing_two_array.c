#include<stdio.h>
int main(){
    int size=5;

    int arr[size];
    int arr1[size];
    int arr2[size];

    printf("enter the first array elements:");
    for(int i=0; i<size; i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("enter the second array elements:");
    for(int i=0; i<size; i++)
    {
    scanf("%d",&arr1[i]);
    }

    int flag=0;
    int count=0;

    for(int i=0; i<size; i++)
    {
        flag =  0;

        for(int j=0; j<size; j++)
        {
            if (arr[i]==arr1[j])
            {
               flag=1;
               break;
            }
        }

        if (flag ==1)
        
        {
           arr2[count]=arr[i];
           count++;
        } 
        
    } 
    
    printf("common elements are:");

    for (int k=0; k<count; k++)
           {
                printf("%d ",arr2[k]);
           }   
     
}

