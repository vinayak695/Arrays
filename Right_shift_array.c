
// #include<stdio.h>
// int main()
// {
//     int size;

//     printf("Enter the size: ");
//     scanf("%d",&size);

//    int arr[size];
//    for(int i=0;i<size; i++)
//    {
//     scanf("%d",&arr[i]);
//    }

//    int temp=arr[size-1];
//    for(int i=size-1; i>0; i--)
//    {
//         arr[i]=arr[i-1];
//    }
//    arr[0]=temp;
   
//   for(int i=0; i<size; i++)
//    {
//     printf("%d",arr[i]);
//    }

// }


// right shift for n numbers

#include<stdio.h>
int main()
{
    int size,n;

    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter the number of time shift to right: ");
    scanf("%d",&n);

   int arr[size];

   printf("Enter the array elements: ");
   for(int i=0;i<size; i++)
   {
    scanf("%d",&arr[i]);
   }

   for(int i=0; i< n; i++)
   {

   int temp=arr[size-1];
   for(int i=size-1; i>0; i--)
   {
        arr[i]=arr[i-1];
   }
   arr[0]=temp;
}
   
   printf("right shift elements are: ");
   for(int i=0; i<size; i++)
   {
    printf("%d ",arr[i]);
   }

}
