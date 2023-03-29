#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
}*first=NULL;

void create(int arr[], int n)
{
    struct Node* temp,*head;
    {
        int i;
        first=(struct Node*)malloc(sizeof(struct Node));
        first->data=arr[0];
        first->next=NULL;
        head=first;

        for(int i=1;i<5;i++)
        {
            temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=arr[i];
            temp->next=NULL;
            head->next=temp;
            head=temp;
        }
    }
}

// void display(struct Node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }
// }


void display(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d\n",p->data);
        display(p->next);
    }
}

void reverse(struct Node *p)
{
    if(p!=NULL)
    {
        reverse(p->next);
        printf("%d\n",p->data);
    }
}

void sum(struct Node *p)
{
    int sum=0;
    while(p!=NULL)
    {
        sum=sum+p->data;
        p=p->next;
    }
    printf("%d\n",sum);
}

void count(struct Node *p)
{

    int c=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    printf("%d\n",c);
}

void maximum(struct Node *p)
{
    int max=0;
    while(p!=NULL)
    {
        if(max < p->data)
        {
            max=p->data;
        }
        p=p->next;
    }
    printf("%d\n",max);
}

int search(struct Node *p)
{
    int key;
    printf("Enter the key :");
    scanf("%d",&key);
    while(p!=NULL)
    {
        if(key==p->data)
        {
            printf("key is found\n");
            return 0;
        }
        p=p->next;
    }printf("Key is not found\n");

}

void add(struct Node *p)
{
    int key;
    struct Node *new;
    printf("Enter the key :");
    scanf("%d",&key);
    
    while(p!=NULL)
    {
         int value;
    printf("enter the value");
    scanf("%d",&value);
        if(key==p->data)
        {
            new=(struct Node *)malloc(sizeof(struct Node));
            new->data=value;
            p->next=new;
            new->next=p->next;
        }
        p=p->next;
    }
}

void middle(struct Node *slow)
{
    struct Node *fast=first;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("%d\n",slow->data);
}

void delete(struct Node *p)
{
    int pos;
    printf("enter the pos :");
    scanf("%d",&pos);
    struct Node *q;
    for(int i=0;i<pos-1;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    int x=p->data;
    free(p);
}

void alternate(struct Node *head)
{
    if(head==NULL)
    {
        return;
    }
    struct Node *node=head->next;
    if(node==NULL)
    {
        return;
    }
    head->next=node->next;
    alternate(head->next);
}

void reversive(struct Node *p)
{
    struct Node* q;
    struct Node* r;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void duplicate(struct Node *p)
{
    struct Node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}

int loop(struct Node *p)
{
    struct Node *q=first;
    do
    {
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:NULL;
    } while (p&&q && p!=q);
    if(p==q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int arr[]={6,5,5,6,22};
    int n=5;
    create(arr,n);
    printf("Display");
    printf("\n");
    display(first);

    printf("Reverse");
    printf("\n");

    reverse(first);

    printf("Sum");
    printf("\n");

    sum(first);
  
   printf("Count how many nodes :");
   printf("\n");

    count(first);

    printf("Maximum node in LL :");
    printf("\n");

    maximum(first);

    printf("Searching in LL :");
    printf("\n");

    search(first);

    // printf("Searching in LL and add the node:");
    // printf("\n");

    //add(first);

    
    printf("Middle of linked list :");
    printf("\n");

    middle(first);

    //printf("Delete any node at any position :");
    //printf("\n");
    //delete(first);
    //display(first);

    printf("alternate delete of linked list :");
    printf("\n");

    alternate(first);
    display(first);


    
    printf("Reverse the  linked list :");
    printf("\n");

    reversive(first);
    display(first);

    printf("Duplicate remove :");
    printf("\n");

    duplicate(first);
    display(first);

    printf("loop is exists :");
    printf("\n");


    struct Node *t1;
    struct Node *t2;
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    printf("%d\n",loop(first));

   

}