// #include<stdio.h>
// int main(){
//     int size;
//     printf("enter the size");
//     scanf("%d",&size);

//     int arr[size];

//     printf("enter the array elements:");

//     for(int i=0; i<size; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     int temp=arr[0];
//     for(int i=0; i<size-1; i++)

//     {
//         arr[i]=arr[i+1];
//     }
//     arr[size-1]=temp;
   
//     printf("elements are :"); 

//     for(int i=0; i<size; i++)
//     {
//         printf("%d",arr[i]);
//     }

// }


// to shift till n numbers;

#include<stdio.h>
int main(){
    int size,n;
    printf("enter the size: ");
    scanf("%d",&size);

    printf("enter how many time you want to shift:");
    scanf("%d",&n);

    int arr[size];

    printf("enter the array elements:");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }



    for(int i=0; i<n; i++)
    {
        
    int temp=arr[0];
    for(int i=0; i<size-1; i++)

    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
}

printf("elements are:");
    for(int i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }

}