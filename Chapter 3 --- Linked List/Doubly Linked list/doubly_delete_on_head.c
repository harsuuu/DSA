#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n)
{
    struct Node *temp, *last;
    int i;

    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->prev=NULL;
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=last->next;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}

void delete(struct Node *p)
{
    int x;
    first=first->next;
    x=p->data;
    free(p);
    first->prev=NULL;
    
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
    int A[]={10,20,30,40,50};

    create(A,5);
    
    delete(first);

    display(first);
}