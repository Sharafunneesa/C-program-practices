#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}SLL;

void insert_begin(SLL**);
void insert_end(SLL**);
void print_node(SLL*);
void delete_nth_node(SLL **);
int count_node(SLL *);

int main()
{
 int choice;
 SLL *headptr=NULL;
 while(1)
 {
 printf("1)insert_begin  2)insert_end  3)print_node 4)delete_nth_node 5)count_node  6)exit\n");
 printf("enter your choice :");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1 : insert_begin(&headptr);break;
  case 2 : insert_end(&headptr);break;
  case 3 : print_node(headptr);break;
  case 4 : delete_nth_node(&headptr);break;
  case 5 : count_node(headptr);break;
  case 6 : exit(0);
  default: printf("enter invalied choice\n");
 }
 }
}

/*********print all nodes****************/

void print_node(SLL *headptr)
{
 if(headptr==NULL)
 {
  printf("there is no node is available\n");
  return;
 }
 else
 {
  while(headptr)
  {
  printf("the node data is :%d\n",headptr->data);
  headptr=headptr->next;
  }
 }
}

/*********insert a node at begin*********/

void insert_begin(SLL **headptr)
{
 SLL *new_node=(SLL*)malloc(sizeof(SLL));
 printf("enter new data :");
 scanf("%d",&new_node->data);
 new_node->next=*headptr;
 *headptr=new_node;
}


/**********insert a node at end*******/

void insert_end(SLL **headptr)
{
 SLL *last;
 SLL *new_node=(SLL*)malloc(sizeof(SLL));
 printf("enter new data :");
 scanf("%d",&new_node->data); 
 new_node->next=0;
 if(*headptr==0)
 *headptr=new_node;
 else
 {
  last=*headptr;
  while(last->next)
  last=last->next;
  last->next=new_node;
 }
} 

/**********Delete nth node******************/

void delete_nth_node(SLL **headptr)
{
 int pos,c,i;
 c=count_node(*headptr);
 if(*headptr==NULL)
 {
  printf("no node data found");
  return;
 }
 SLL *prev,*del=*headptr;
 printf("enter the node position to delete :");
 scanf("%d",&pos);
 if(pos>=0 && pos<=c)
 {
 for(i=1;i<c;i++)
 {
  if(i==pos)
  {
  if(pos==1)
  *headptr=(*headptr)->next;
  else
  prev->next=del->next;
  free(del);
  return;
  }
 prev=del;
 del=del->next;
 }
 }
 else
 printf("node out of range\n");
}

/************count node*****************/

int count_node(SLL *headptr)
{
 int n=0;
 if(headptr==NULL)
 {
  printf("no nodes\n");
  return 0;
 }
 else
 while(headptr)
 {
 n++;
 headptr=headptr->next;
 }
 printf("the total node is : %d\n",n);
 return n;
}
  
  

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
