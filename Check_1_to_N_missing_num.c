#include <stdio.h>

int main()
{
    int size = 6;
    int arr[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i + 1] != arr[i] + 1)
        {
            printf("Missing Number is  = %d", arr[i] + 1);
            break;
        }
    }


}