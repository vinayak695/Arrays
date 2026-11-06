#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int num;
    printf("enter the element you want to seach:");
    scanf("%d",&num);

    int flag=0;
    for(int i=0; i<size; i++)
    {
        if (num==arr[i])
        {
            flag++;
        }
    }
    if (flag==1)
    {
        printf("elements found");
    }
    else{
        printf("element not found");
    }

}