#include<stdio.h>
void main()
{
 int a[10][10],b[10][10],r,c,i,j;
 printf("enter the value of rows and cloumns\n");
 scanf("%d%d",&r,&c);
 printf("enter matrix elements\n");
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   scanf("%d",&a[i][j]);
 }
 printf("given matrix is\n");
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   printf("%d ",a[i][j]);
   printf("\n");
 }
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   b[j][i]=a[i][j];
 }
 printf("matrix transpose is\n");
 for(i=0;i<c;i++)
 {
   for(j=0;j<r;j++)
   {
     printf("%d ",b[i][j]);
     if(j==r-1)
      printf("\n");
   }
 }
}
