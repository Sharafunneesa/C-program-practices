#include <stdio.h> 
void main() 
{ 
 int n,c=1,k,i,j;//declaration of variables
 printf("enter number of rows: "); 
 scanf("%d",&n);// taking row value from the user
 for(i=0;i<n;i++) 
 { 
  for(k=1;k<=n-i;k++) 
  printf(" "); //using for loop printing appropriate space 
  for(j=0;j<=i;j++) 
  { 
   if(j==0||i==0)// cheking the j value and i value is zero
    c=1; // if it zero direct put first and last value as one  
   else 
    c=c*(i-j+1)/j; //if it not calculating the vlaue in between the ones
   printf("%d ",c); //printing the pascal triangle values
  } 
 printf("\n"); //taking next line for proper triangle shape
 } 
}
