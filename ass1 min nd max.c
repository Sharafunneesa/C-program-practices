#include<stdio.h>
int main()
{
int a[50],i,n,min,max;//declarationof variables
printf("Enter size of the array : ");
scanf("%d",&n);//taking array size from user
printf("Enter elements in array : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);//taking array elements from user
min=max=a[0];//assigning array first element as minimum and maximum
for(i=1;i<n;i++)
{
 if(min>=a[i])//checking every elemenet less than or equal to minimum value
  min=a[i];// if that less than, then assigning to min
 if(max<=a[i])//checking every elemrnt greater than or equal to maximum value
  max=a[i]; // if that grater then assigning     
}
printf("minimum of array is : %d\n",min);// printing minimum value
printf("maximum of array is : %d\n",max);//printing maximum value
 }
