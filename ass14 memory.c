#include<stdio.h>
void main()
{
 int array[10],*ptr,*p,i,n,memory;// declaration of variables
 printf("enter the limit :");
 scanf("%d",&n);//taking array limit from user
 printf("enter the array elements :");
 for(i=0;i<n;i++)
 scanf("%d",&array[i]);//taking array elements from user
 p=ptr=&array[0];//assigning base address of array int pointers
 
 printf("the array elements are :");
 for(i=0;i<n;i++)
 {
 printf("%d ",array[i]);
 ptr++;
 }//printing array elements in screen
 memory=(ptr-p)*4;//calculating memory for array allocation
 printf("\nmemory allocated for intiger array is %d bytes\n",memory);//print the memory size
}
