#include<stdio.h>
#include<stdlib.h>
int queue[5],rear=-1,front=-1;
void enqueue()
{
 int data;
 if(rear==5-1)
 {
   printf("overflow");
 }
 else
 {
   if(front==-1)
   {
     front=0;
   }
  printf("enter data");
  scanf("%d",&data);
  rear=rear+1;
  queue[rear]=data;

 }

}

void dequeue()
{
 if(front==-1 || front>rear)
 {
   printf("underflow");
 }
 else
 {
  printf("dequeue data is->%d\n",queue[front]);
  front=front+1;
 }

}

 void display()
 {
  int i;
  if(front==-1 || rear==-1)
  {
   printf("queue is empty");
  }
  else
 {
  for(i=front;i<=rear;i++)
  {
  printf("data->%d\n",queue[i]);
  }
 }
 }


int main()
{
int ch;
while(1)
{
printf("1.enqueue\n");
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
