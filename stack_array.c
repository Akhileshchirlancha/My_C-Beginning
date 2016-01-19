#include <stdio.h>
#define MAXSIZE 5

struct stack          
{
    int stk[MAXSIZE];
    int top;
} s;

void push ();
void pop();
void display ();
void search();


int main()
{

int choice;

s.top = -1;

while (1)
    {
        printf ("------------------------------------------\n");
        printf ("1. PUSH\n");
        printf ("2. POP\n");
        printf ("3. DISPLAY\n");
        printf ("4. SEARCH\n");
        printf ("5. EXIT\n");
        printf ("------------------------------------------\n");

        printf ("Enter your choice\n");
        scanf   ("%d", &choice);

        switch (choice)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: search();
                break;
            case 5: return 0;
        }

    }
return 0;
}

void push()
 {
    int num;

    if (s.top == (MAXSIZE - 1))
    {
        printf ("Error: Overflow\n");
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
}


void pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Error: Stack Empty\n");
    }
    else
    {
        num = s.stk[s.top];
        printf ("poped element is = %d\n", num);
        s.top = s.top - 1;
    }
}



void display()
{
    int i;
    if (s.top == -1)
    {
        printf ("Error: Stack Empty\n");
    }
    else
    {
        printf ("\nElements in Stack\n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}


void search()
{

    int i;
    int num;
    int counter=0;
    if (s.top == -1)
    {
        printf ("Error: Stack Empty\n");
    }
    else
    {
        printf ("Enter the element to be searched\n");
        scanf ("%d", &num);

        for (i = s.top; i >= 0; i--)
        {
            if(num==s.stk[i])
	    {
            counter++;
            break;
            }
        }

        if(counter>0)
	{
            printf ("Element %d found in stack\n", num);
        }
        else 
	{
            printf ("Element %d not found in stack\n", num);
        }
    }
    printf ("\n");

}
