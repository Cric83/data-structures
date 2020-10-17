#include<stdio.h>
#include<stdlib.h>
struct stack
{
  int data;
  struct stack *next;
};

struct stack *top=NULL;

void push()
{
 int data;  
 struct stack *ptr;
 printf("enter data to push\n");
 scanf("%d",&data);
 ptr=(struct stack*)malloc(sizeof(struct stack));  
 ptr->data=data;
 ptr->next=NULL;
 if(top==NULL)
  {
    ptr->next=top;
    top=ptr;
  }
 else
   {
     ptr->next=top;
     top=ptr;
   }
}


void pop()
{
  struct node *temp;
   temp=top;
  if(top==NULL)
   {
     printf("stack is empty\n");
   }
 else
  {
    temp=top;
    printf("poped data is %d\n",top->data);
    top=top->next;
    free(temp); 
  }
}


void peek()
{
  if(top==NULL)
   {
     printf("stack is empty\n");
   }
  else
      {
       printf("%d\n",top->data);
      }
}


void display()
{
  struct stack *temp;
  temp=top;
  while(temp!=NULL)
  {
   printf("data->%d\n",temp->data);
   temp=temp->next;
  }
}

int main()
{
 int ch;
while(ch!=5)
 {
 printf("1.push\n2.pop\n3.peek\n4.display\n 5.exit\n");
 scanf("%d",&ch);
 switch(ch)
  {
  case 1:
        push();
        break;
  case 2:
	pop();
	break;
  case 3:
	peek();
	break;
  case 4:
      display();
 	break;
  default:
       exit(0);
	break;
  }
 }
}