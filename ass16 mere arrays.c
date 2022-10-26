#include<stdio.h>
void main()
{
int a[50],b[50],n,j,m,*p,i;//declaration of variables

printf("enter the limit of arrays : ");
scanf("%d%d",&n,&m);//taking the limit of arrays from user

printf("enter the elements of  1st array :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);//taking first arry element from user

printf("enter the elements of 2nd array :");
for(i=0;i<m;i++)
scanf("%d",&b[i]);//taking the second array element from user

p=&b[0];//assigning the adress of second array to the pointer

j=n;
for(i=0;i<m;i++)
a[j++]=*p++;//using for loop put first array element in to second array

for(i=0;i<(m+n);i++)
printf("%d ",a[i]);
}//using for loop printing the merged array elements
