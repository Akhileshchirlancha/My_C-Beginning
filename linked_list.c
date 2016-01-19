#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
 
int delete(int);
    
struct node
    {
        int num;
        struct node *ptr;
    };
    typedef struct node NODE;
 
    NODE *head, *first, *temp = 0;
// static int numbr;
void main()
{
    int count = 0;
    int choice = 1,ch;
    first = 0;
    int numbr;
 
    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the num item\n");
        scanf("%d", &head-> num);
        if (first != 0)
        {
            temp->ptr = head;
//            head->ptr = temp;
           // head = temp;
              temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);
 
    }
    temp->ptr = 0;
    /*  reset temp to the beginning */
    temp = first;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
  printf("\n do you want to delete node? (type 0 or 1)\n");
  scanf("%d",&ch);
  if(ch==1)
  {
                if(head==NULL)
                printf("List is Empty\n");
                else
                {
                printf("Enter the number to delete : ");
                scanf("%d",&numbr);
                if(delete(numbr))
                    printf("%d deleted successfully\n",numbr);
                else
                    printf("%d not found in the list\n",numbr);
                }
  }
    count = 0;
    temp = first;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
}



int delete(int numbr)
{
 struct node *prev, *temp;
    temp=head;
    while(temp!=NULL)
    {
    if(temp->num==numbr)
    {
        if(temp==head)
        {
        head=temp->ptr;
        free(temp);
        return 1;
        }
        else
        {
        prev->ptr=temp->ptr;
        free(temp);
        return 1;
        }
    }
    else
    {
        prev=temp;
        temp= temp->ptr;
    }
    }
    return 0;
}
