#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    int unique[size];

  for(int i=0; i<size;i++)
  {
    scanf("%d",&arr[i]);
  }

  unique[0]= arr[0];
  int count=1;

  for(int i=1; i<size; i++)
  {
    int flag=0;
    for(int j=0; j<count; j++)
    {
      if (arr[i]==unique[j])
        {
          flag=1;
          break;
        }
    }
    if (flag==0)
    {
      unique[count]=arr[i];
      count++;
    }
  } 
  printf("unique elements are:");
  for(int i=0; i<count; i++)
  {
    printf("%d",unique[i]);
    
  }  
}
