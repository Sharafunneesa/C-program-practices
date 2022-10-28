#include<stdio.h>
#include<stdlib.h>
#define size 10
void enqueue();
void dequeue();
void show();//declaring the every functions
int queue[size],first=-1,last=-1,y=-1;

void main()
{
 do//take for do while loop for continue
 {
  int choice;
  printf("operations of queue\n");
  printf("1)enqueue\n 2)dequeue\n 3)show\n 4)exit\n");
  printf("enter your choice :");
  scanf("%d",&choice);//taking choice from user
   switch(choice)
 {
  case 1:enqueue();
  break;
  case 2:dequeue();
  break;
  case 3:show();
  break;
  case 4:exit(0);
  default:printf("enter invalied coice\n");//using switch case calling the functions 
 }
 }while(1);
}
 
void enqueue()//definition of enqueue
{
 int x;
 if(last==size-1)
 printf("queue is overflow\n");
 else
 {
  if(first==-1)
  first=0;
  printf("enter the element to enqueue :");
  scanf("%d",&x);
  last=last+1;
  queue[last]=x;
 }
}

void dequeue()
{
 if(first==-1 || first>last)
 printf("queue is underflow\n");
 else
 {
  printf("the element dequeue from the queue is        %d\n",queue[first]);
  first=first+1;
 }
 y++;
}
  
void show()
{
 int i;
 if(last==y || first==-1)
 printf("queue is empty\n"); 
 else
 {
 if(last != -1 && first != -1)
  printf("the lements in queue is :");
  for(i=first;i<=last;i++)
  printf("%d ",queue[i]);
 }
printf("\n");
}

