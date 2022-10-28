#include<stdio.h>
#include<string.h>
void suppress_in_string(char *,char);//declaration of user defined function
int main()
{
 char s[50];
 char ch;
 printf("enter the string : ");
 scanf(" %[^\n]",s);//taking the string from user
 printf("enter the char to suppress : ");
 scanf(" %c", &ch);//taking the character to suppress from user
 suppress_in_string(s,ch);//calling the user defined suppress_in_string function
 }
 
 void suppress_in_string(char *str,char c)//definition of user defined function
 {
  int len,i,j;//declaiaring the variables
  len = strlen(str);//calculating the string length and assignning to len variable
  for(i = 0; i < len; i++)//taking a loop to rotate from first character to last of string
  {
   if(str[i] == c)//checking every character with the user taken character
   {
    for(j = i; j < len; j++)//if those character's are same then suppress that character
    {
     str[j] = str[j + 1];//move the next character into the posiion of suppressed character
    }
    len--;//decrease the string length for next itration
    i--;	//decrease the i value for next iteration
   } 
  }
 printf("the string is :%s\n",str);//printing the string after suppressing the character
 }
 
