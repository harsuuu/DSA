#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    struct Node* Lchild;
    int data;
    struct Node* Rchild;
}*root=NULL;

void insert(int key)
{
    struct Node *t=root;
    struct Node *p;
    struct Node *r;


    if(root==NULL)
    {
        p=(struct Node*)malloc(sizeof(struct Node));
        p->data=key;
        p->Lchild=NULL;
        p->Rchild=NULL;
        root=p;
        return;
    }

    while(t!=NULL)
    {
        r=t;
        if(key>t->data)
        {
            t=t->Rchild;
        }
        else if(key==t->data)
        {
            return;
        }
        else
        {
            t=t->Lchild;
        }
    }

    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=key;
    p->Lchild=NULL;
    p->Rchild=NULL;
    if(key>r->data)
    {
        r->Rchild=p;
    }
    else
    {
        r->Lchild=p;
    }
}

void inorder(struct Node *p)
{
    if(p==NULL)
    {
        return;
    }
    inorder(p->Lchild);
    printf("%d\n",p->data);
    inorder(p->Rchild);
}

void maximum(struct Node *p)
{
    while(p->Rchild!=NULL)
    {
        p=p->Rchild;
    }
    printf("%d\n",p->data);
}

void minimum(struct Node *p)
{
    while(p->Lchild!=NULL)
    {
        p=p->Lchild;
    }
    printf("%d\n",p->data);
}

int sum(struct Node *p)
{
    if(p==NULL)
    {
        return;
    }
    return( p->data + sum(p->Lchild) + sum(p->Rchild));
}

int count(struct Node *p)
{
    if(p==NULL)
    {
        return;
    }
    return(1+count(p->Lchild)+count(p->Rchild));
}

struct Node* search(struct Node *s)
{
    int key;
    printf("Enter key :");
    scanf("%d",&key);

    while(s!=NULL)
    {
        if(key==s->data)
        {
            return s;
        }
        else if(key>s->data)
        {
            s=s->Rchild;
        }
        else 
        {
            s=s->Lchild;
        }
    }
    return NULL;
}

void inserting(struct Node *p)
{
    struct Node* new;
    struct Node* r;
    int key;
    printf("Enter the key :");
    scanf("%d",&key);
    while(p!=NULL) 
    {
        r=p;
        if(key==p->data)
        {
            return;
        }
        else if(key>p->data)
        {
            p=p->Rchild;
        }
        else
        {
            p=p->Lchild;
        }
    }

    new=(struct Node*)malloc(sizeof(struct Node));
    new->data=key;
    new->Lchild=NULL;
    new->Rchild=NULL;
    if(r->data>new->data)
    {
        r->Lchild=new;
    }
    else
    {
        r->Rchild=new;
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(5);
    insert(40);
    insert(50);

    printf("Printing :");
    printf("\n");
    inorder(root);

     printf("Maximum :");
    printf("\n");
    maximum(root);


    printf("Minimum :");
    printf("\n");
    minimum(root);

    printf("sum :");
    printf("\n");
    printf("%d\n",sum(root));

     printf("count :");
    printf("\n");
    printf("%d\n",count(root));

    struct Node *temp;  
    printf("search :");
    printf("\n");
    temp=search(root);
    if(temp!=NULL)
    {
        printf("Key is found");
    }
    else
    {
        printf("key is not found");
    }

    printf("Insert :");
    printf("\n");
    inserting(root);
    inorder(root);
    
}

