#include<stdio.h>
#include<stdlib.h>
struct node
{
       int data;
       struct node *next;
};
struct node *head;

void create()
{
       int data,n,c=1;
       struct node *ptr,*temp;
       while(c==1)
       {
       printf("enter data");
       scanf("%d",&data);
       ptr=(struct node *)malloc(sizeof(struct node));
       ptr->data=data;
       ptr->next=NULL;
       if(head==NULL)
       {
              head=ptr;

       }
       else
              {
                     head=ptr;
                     temp=head;
                     printf("press 1 to create more nodes");
                     scanf("%d",&n);
                     while(n==1)
                     {
                            printf("enter data");
                            scanf("%d",&data);
                            ptr=(struct node *)malloc(sizeof(struct node));
                            ptr->data=data;
                            ptr->next=NULL;
                            temp->next=ptr;
                            temp=temp->next;
                            printf("press 1 to create more nodes");
                            scanf("%d",&n);

                     }


              }
              printf("press 1 to go again and create more nodes");
              scanf("%d",&c);
       }

}

 int search (int val)
 {
        int *pos;
        struct node *temp;
        temp=head;
        while(temp!=NULL)
        {
               if(temp->data=val)
               {
                      pos=temp->next;
                      printf("data is found at position at position %d",pos);

               }
               temp=temp->next;
        }
        return pos;
 }

 int main()
 {

        int val,n;
        create();
        printf("enter data you want to search");
        scanf("%d",&val);
        search(val);
        return 0;
 }
