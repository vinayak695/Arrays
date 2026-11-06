// #include<stdio.h>
// int main(){
//     int size,i,largest,secondlargest,thirdlargest;

//     printf("enter the size:");
//     scanf("%d",&size);

//     int arr[size];

//     for(i=0; i<size; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     largest = arr[0];

//     for(i=0; i<size; i++)
//     if (largest < arr[i])
//     {
//         largest = arr[i];            // to find largest
//     }

//     secondlargest=0;

//     for(i=0; i<size; i++)
//     {
//        if(arr[i] != largest && arr[i] > secondlargest)

//         {
//             secondlargest =arr[i];    // to find secondlargest
//         }
//     }
    
//         thirdlargest=0;
//         for(i=0; i<size; i++)
//     {
//          if(arr[i] != largest && arr[i] != secondlargest &&
      
//         arr[i] > thirdlargest)
//         {
//             thirdlargest =arr[i];
//         }
//     }
//     printf("largest is: %d\n",largest);                   // to find largest
//     printf("second largest is: %d\n",secondlargest);      // to find  second largest  
//     printf("third largest is: %d\n",thirdlargest);       // to find third largest
    
// }



//largest

#include<stdio.h>
int main(){
    printf("enter the size");
    int size;
    scanf("%d",&size);

    int arr[size];
    printf("enter the elements");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int largest=0;
    for(int i=0; i<size; i++)
    {
        if(largest < arr[i])
        {
            largest=arr[i];
        }
    }printf("largest is :%d",largest);

    int secondlargest=0;
    for(int i=0; i<size ; i++)
    {
        if(arr[i]!=largest && arr[i]>secondlargest)
        {
            secondlargest=arr[i];
        }
    }printf("\nsecond largest is :%d",secondlargest);

 int thirdlargest=0;
 for(int i=0; i<size; i++)
{
    if(arr[i]!=largest && arr[i]!=secondlargest && arr[i]>thirdlargest)
    {
        thirdlargest=arr[i];
    }
}printf("\nsecond largest is :%d",thirdlargest);
}