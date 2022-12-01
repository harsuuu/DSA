//DELETE FIRST NODE
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;    
}*first=NULL;

void create(int A[], int n)
{
    struct Node *temp, *head;  
    {
        int i;
        first=(struct Node*)malloc(sizeof(struct Node));
        first->data=A[0];
        first->next=0;
        head=first;

        for(int i=1; i<5;i++)
        {
            temp=(struct Node*)malloc (sizeof(struct Node));
            temp->data=A[i];
            temp->next=0;
            head->next=temp;
            head=temp;
        }
    }
}

void delete(struct Node *p)
{
    int x;
    first=first->next;
    x=p->data;
    free(p);
}


void display(struct Node *p)
{
    while(p)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}

int main()
{
    int A[]={11,22,33,44,55};
    create (A,5);

    delete(first);

    display(first);

    return 0;
}