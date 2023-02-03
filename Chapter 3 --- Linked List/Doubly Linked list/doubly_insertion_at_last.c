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
void insert(struct Node *p, int pos)
{
    for(int i=0;i<pos-1;i++)
    {
        p=p->next;
    }
    struct Node *t;
    int x;
    printf("Enter the value which we will insert in new  node:");
    scanf("%d",&x);
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->prev=p;
    t->next=NULL;
    p->next=t;
    
   
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

    insert(first,5);

    display(first);
}