// #include<stdio.h>
// int main(){
//     int size=5;
//     int arr[5]={1,3,4,5,6};
//     int arr1[5];

//     for(int i=0; i<size; i++)
//     {
//         arr1[i]=arr[i];
//     }
//     printf("copied array is :\n");
//     for(int i=0; i<size; i++)
//     {
//     printf("%d\n",arr1[i]);
// }
// }

#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    int arr2[size];

    for(int i=0; i<size; i++)
{
    scanf("%d",&arr[i]);
}

    printf("First elements are:");
    for(int i=0; i<size; i++)
    {
        printf("%d",arr[i]); 
    }

    printf("\nSecond elements are:");
    for(int i=0; i<size; i++)
    {
        arr2[i]=arr[i];
        printf("%d",arr2[i]);
    }

}

