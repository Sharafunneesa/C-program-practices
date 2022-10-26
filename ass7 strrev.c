#include<stdio.h>
#include<string.h>
void str_rev(char *);//declaration of function
void main()
{
char d[50];//declaration of variable
printf("enter the string\n");
scanf("%s",d);//taking the string fro user
str_rev(d);//calling the string reverse function
printf("string reverse:%s\n",d);//print the reversed string
}

void str_rev(char *s)//definition of string reverse function
{
int i,len,temp;//declairing the variables
len=strlen(s);//finding the length of the string
for(i=0;i<len/2;i++)//taking a loop to reverse
{
temp=s[i];//assigning first character into temp variable
s[i]=s[len-1-i];//assigning last character into first position
s[len-1-i]=temp;//assigning first character into last and go on
}//reversing all character using loop
}
