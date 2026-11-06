#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0; i<size/2; i++)
    {
        if(arr[i] != arr[size - 1 - i])
        {
        flag=1;
        break;
        }

    }
    if(flag==1)
    {
        printf("Not a palandrome number");
    }
    else
    {
        printf("it is palandrome");
    }

}