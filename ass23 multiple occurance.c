#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int i,j,k;//declairing the variables
 printf("ENter a string :");
 scanf("%[^\n]", str);//entering the string
 printf("%ld\n", strlen(str));
 for(i=0; i < strlen(str); i++)//taking a loop for first iteration
 {
  for(j=i+1; j < strlen(str);)
  {
   if(str[i]==str[j])//checking the  adjusent characters are equal 
   {
    for(k=j;str[k];k++)
    {
     str[k] = str[k+1];//if it equal then removing that and assigning next element
    }
   }
   else
   {
    j++;//or increment the j value
   }
  }
  }
printf("%s\n", str);//printing the last string
 }
