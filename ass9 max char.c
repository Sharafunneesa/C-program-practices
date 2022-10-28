#include<stdio.h>
#include<string.h>
void print_max(char *);//declaration of user defined function
void main()
{
 char d[50];
 printf("enter the string\n");
 scanf("%s",d);//taking string from user
 print_max(d);//calling the function
}

void print_max(char *s)
{
 int a[50],n,i,j,k=0,c=0;//declairing the variable 
 n=strlen(s);//taking the string length
 for(i=0;i<n;i++)
 {
   a[i]=0;//taking one array with assigning zero
   c=1;
   if(s[i])
   {
     for(j=i+1;j<n;j++)
     {
       if(s[i]==s[j])//checking the adjusent character are same
       {
         c++;//if it same increase the value of c
         s[j]='\0';
       }
     }
   }
 a[i]=c;
 if(c>=k)//checking the maximum number if it not 
   k=c;//assigning it into other variable to go for nex iteration
 }
 for(j=0;j<n;j++)
 {
   if(a[j]==k)//checking the k value and new array are equal
   printf("maximum frequancy character is:%c\n",s[j]);//if it equal then printing
 }
 printf("this time:%d\n",k);//printing the count
}
