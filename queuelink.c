#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
 struct queue
 {
  int data;
  struct queue *next;
 }*rear=NULL,*front=NULL;

 void enqueue()
 {
   int data;
   struct queue *temp,*ptr;
   ptr=(struct queue *)malloc(sizeof(struct queue));
   printf("enter data");
   scanf("%d",&data);
   ptr->data=data;
   ptr->next=NULL;
   if(front==NULL)
   {
    front=ptr;
	rear=front;
   }
   else
   {
   rear->next=ptr;
   rear=ptr;
   }
 }
 
 void dequeue()
 {
 int data;
  struct queue *temp=front;
    if(front==NULL)
	{
	 printf("underflow");
	}
	
	if(front==rear)
	{
		front=rear=NULL;
	}
	
	else
	{
	 temp=front;
	 data=temp->data;
	 printf("removed data ->%d\n",temp->data);
	 front=front->next;
	 free(temp); 	 
	
	}
 
 }
 
void display()
{
 int i;
 struct queue *temp;
 temp=front;  
  if(front==NULL || rear==NULL)
  {
   printf("queue is empty\n");
  }

 else
   {
    temp=front;
    for(i=front;i<=rear;i++)
	{
	 printf("data-> %d\n",temp->data);
	 temp=temp->next;
	}
  }

}
 
int main()
{
int ch;
while(1)
{
printf("\n1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");
printf("4.exit\n");
scanf("%d",&ch);
 switch(ch)
  {
 case 1:
       enqueue();
       break;
case 2:
		dequeue();
		break;
case 3:
       display();
		break;
default:
	     exit(0);
		 break;
  }
}
return 0;
}




