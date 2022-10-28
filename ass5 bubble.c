#include<stdio.h>
void main()
{
  int a[10],i,j,temp,n;//declaration of variables
  printf("enter the limit\n");
  scanf("%d",&n);//taking array limit from user
  printf("enter the elements\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);//taking array elements from user
  for(i=0;i<n-1;i++)//taking a first loop for iterating total length of the array minus one
  {
     for(j=0;j<n-1-i;j++)//taking the second loop to check adjusent elements 
     {
       if(a[j]>=a[j+1])//checking the adjusent elements which is smaller
       {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
       }//if it smaller then interchanging the elements using a temp variable
     }
  }
  printf("sorted elements are\n");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);//printing the sorted array
}
