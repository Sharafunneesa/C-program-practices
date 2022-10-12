#include<stdio.h>
#include<string.h>
void print_max(char *);
void main()
{
char d[50];
printf("enter the string\n");
scanf("%s",d);
print_max(d);
}

void print_max(char *s)
{
int a[50],n,i,j,k=0,c=0;
n=strlen(s);
for(i=0;i<n;i++)
{
a[i]=0;
c=1;
if(s[i])
{
for(j=i+1;j<n;j++)
{
if(s[i]==s[j])
{
c++;
s[j]='\0';
}
}
}
a[i]=c;
if(c>=k)
k=c;
}
for(j=0;j<n;j++)
{
if(a[j]==k)
printf("maximum frequancy character is:%c\n",s[j]);
}
printf("this time:%d\n",k);
}
   
 
