//INSERTION BEFORE FIRST NODE
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n)
{
    struct Node *temp,*head; 

    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    head=first;

    for(int i=1;i<n;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=A[i];
        temp->next=NULL;
        head->next=temp;
        head=temp;
    }
}

void insert(struct Node *p)
{
    int x;
    printf("Enter the value which you want to insert in new node:");
    scanf("%d",&x);

    struct Node *new;
    new=(struct Node*)malloc(sizeof(struct Node));
    new->data=x;
    new->next=first;
    first=new;
}

void display(struct Node *p)
{
    while(p)  //iska jb tk P ki value hai tb tk chle ye loop "OR" while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}


int main()
{
    int A[]={10,22,34,21,23};

    create(A,5);

    insert(first);

    display(first);
}