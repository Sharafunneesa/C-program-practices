#include<stdio.h>
#include<string.h>
void suppress_in_string(char *,char);//declaration of user defined function
int main()
{
 char s[50];
 char ch;
 printf("enter the string : ");
 scanf(" %[^\n]",s);
 printf("enter the char to suppress : ");
 scanf(" %c", &ch);
 suppress_in_string(s,ch);
 }
 
 void suppress_in_string(char *str,char c)
 {
  int len,i,j;
  len = strlen(str);
  printf("%c", c);
  for(i = 0; i < len; i++)
  {
   if(str[i] == c)
   {
    for(j = i; j < len; j++)
    {
     str[j] = str[j + 1];
    }
    len--;
    i--;	
   } 
  }
 printf("the string is :%s\n",str);
 }
 
