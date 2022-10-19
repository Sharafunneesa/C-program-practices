#include<stdio.h>
void main()
{
 int array[10],*ptr,*p,i,n,memory;
 printf("enter the limit :");
 scanf("%d",&n);
 printf("enter the array elements :");
 for(i=0;i<n;i++)
 scanf("%d",&array[i]);
 p=ptr=&array[0];
 
 printf("the array elements are :");
 for(i=0;i<n;i++)
 {
 printf("%d ",array[i]);
 ptr++;
 }
 memory=(ptr-p)*4;
 printf("\nmemory allocated for intiger array is %d bytes\n",memory);
}
