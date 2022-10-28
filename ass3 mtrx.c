#include<stdio.h>
void main()
{
 int a[10][10],b[10][10],r,c,i,j;//declaration f variables
 printf("enter the value of rows and cloumns\n");
 scanf("%d%d",&r,&c);//taking the value of rows and colounms from user
 printf("enter matrix elements\n");
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   scanf("%d",&a[i][j]);//using for loop entering the matrix element from user
 }
 printf("given matrix is\n");
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   printf("%d ",a[i][j]);
   printf("\n");
 }//using for loop printing the given metrix first
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   b[j][i]=a[i][j];
 }//to take matrix transpose changing the rows and colunms of matrix usin for loop
 printf("matrix transpose is\n");
 for(i=0;i<c;i++)
 {
   for(j=0;j<r;j++)
   {
     printf("%d ",b[i][j]);
     if(j==r-1)//finding the j itration value is rows - 1
      printf("\n");//if that printing the next element in next line
   }//printing the metrix transpose
 }
}
