#include<stdio.h>
void main()
{
int a[50],b[50],n,j,m,*p,i;

printf("enter the limit of arrays : ");
scanf("%d%d",&n,&m);

printf("enter the elements of  1st array :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter the elements of 2nd array :");
for(i=0;i<m;i++)
scanf("%d",&b[i]);

p=&b[0];

j=n;
for(i=0;i<m;i++)
a[j++]=*p++;

for(i=0;i<(m+n);i++)
printf("%d ",a[i]);
}
