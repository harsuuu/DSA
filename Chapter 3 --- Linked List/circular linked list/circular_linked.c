#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head=NULL;

void create(int A[], int n)
{
    struct Node *temp, *last;
    int i;

    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=A[0];
    head->next=head;
    last=head;

    for(i=1;i<n;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}

void display(struct Node *p)
{
    do
    {
        printf("%d\n",p->data);
        p=p->next;
    } while (p!=head);
    
}

int main()
{
    int A[]={11,22,33,44,55};
    create(A,5);

    display(head);
}