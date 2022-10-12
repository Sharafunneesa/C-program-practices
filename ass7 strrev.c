#include<stdio.h>
#include<string.h>
void str_rev(char *);
void main()
{
char d[50];
printf("enter the string\n");
scanf("%s",d);
str_rev(d);
printf("string reverse:%s\n",d);
}

void str_rev(char *s)
{
int i,len,temp;
len=strlen(s);
for(i=0;i<len/2;i++)
{
temp=s[i];
s[i]=s[len-1-i];
s[len-1-i]=temp;
}
}
