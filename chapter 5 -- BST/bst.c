/*#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *Lchild;
    int data;
    struct Node *Rchild;
}*root=NULL;

void insert(int key)
{
    struct Node *t=root;              //it will point on root.
    struct Node *r, *p;               // r is tail pointer.  

    if(root==NULL)           //Means there is no bst.
    {
        p=(struct Node *)malloc(sizeof(struct Node));
        p->Lchild=NULL;
        p->data=key;
        p->Rchild=NULL;
        root=p;
        return ;
    }
    //It will become first Node.

    while(t!=NULL)
    {
        r=t;      //r will be following t.

        if(key==t->data)
        {
            return;
        }
        else if(key>t->data)
        {
            t=t->Rchild;
        } 
        else
        {
            t=t->Lchild;
        }
    }

    p=(struct Node*)malloc(sizeof(struct Node));
    p->Lchild=NULL;
    p->data=key;
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

void Inorder(struct Node *t)
{
    if(t==NULL)
    {
        return;
    }
    else{
    Inorder(t->Lchild);
    printf("%d\n",t->data);
    Inorder(t->Rchild);
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(4);
    insert(23);
    insert(32);
    insert(33);

    Inorder(root);

    return 0;

}*/

#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    struct Node *Lchild;
    int data;
    struct Node *Rchild;
}*root=NULL;

void insert(int key)
{
    struct Node *t=root;
    struct Node *r, *p;

    if(root==NULL)    //Means there is not bst. 
    {
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->Lchild=NULL;
        p->Rchild=NULL;
        root=p;
        return ;
    }
    //Now it will become first node.

    while(t!=NULL)
    {
        r=t;
        if(key==t->data)
        {
            return;
        }
        else if (key>t->data)
        {
            t=t->Rchild;
        }
        else
        {
            t=t->Lchild;
        }
    }

    p=(struct Node *)malloc(sizeof(struct Node));
    p->data=key;
    p->Lchild=NULL;
    p->Rchild=NULL;
    if(key>r->data)
    {
        r->Rchild=p;
    }
    else{
        r->Lchild=p;
    }
}

void Inorder(struct Node *p)
{
    if(p==NULL)
    {
        return;
    }
    else
    {
    Inorder(p->Lchild);
    printf("%d\n",p->data);
    Inorder(p->Rchild);
    }
}

struct Node* search(struct Node *s)
{
    int key;
    printf("Enter the key which you want to search");
    scanf("%d",&key);
    while(s!=NULL)
    if(key==s->data)
    {
        return s;
    }
    else if(key>s->data)
    {
        s=s->Rchild;
    }
    else{
        s=s->Lchild;
    }

    return NULL ;
    
}

int count(struct Node *p)
{
    if(p==NULL)
    {
        return ;
    }
    else
    {
        return (1+count(p->Lchild)+count(p->Rchild));
    }
}

int height(struct Node *p)
{
    int x=0;int y=0;
    if(p==NULL)
    {
        return;
    }
    else
    {
        x=height(p->Lchild);
        y=height(p->Rchild);
    }
    if(x>y)
    {
        return x+1;
    }
    else{
        return y+1;
    }
}

int counting(struct Node *p)
{
    int x;
    int y;
    if(p!=NULL)
    {
        x=counting(p->Lchild);
        y=counting(p->Rchild);
    if(p->Lchild==NULL && p->Rchild==NULL)
    {
        return x+y+1;
    }
    else
    {
        return x+y;
    }
    return 0;
}
}

int counting1(struct Node *p)
{
    int x;
    int y;
    if(p!=NULL)
    {
        x=counting1(p->Lchild);
        y=counting1(p->Rchild);

        if(p->Lchild &&p->Rchild)
        {
            return x+y+1;
        }
        else{
            return x+y;
        }
    return 0;

    }
}

int counter(struct Node *p)
{
    int x=0;
    int y=0;
    if(p!=NULL)
    {
         x=counter(p->Lchild);
         y=counter(p->Rchild);
        if(p->Lchild || p->Rchild)
        {
            return x+y+1;
        }
        else
        {
            return x+y;
        }
    }
    return 0;
}

int one(struct Node *p)
{
    int x,y;
    if(p!=NULL)
    {
        x=one(p->Lchild);
        y=one(p->Rchild);

        if(p->Lchild!=NULL && p->Rchild==NULL || p->Lchild==NULL && p->Rchild!=NULL)
        {
            return x+y+1;
        }
        else{
            return x+y;
        }
    }
    return 0;
}
int main()
{
    struct Node *temp;
    insert(10);
    insert(9);
    insert(8);
    insert(7);
    insert(23);
    insert(33);
    insert(21);
    insert(24);
    insert(25);
    insert(50);

    Inorder(root);

   /* temp=search(root);
    if(temp!=NULL)
    {
        printf("Key is found",temp->data);
    }
    else
    {
        printf("Key is not found");
    }*/

    printf("count is %d\n",count(root));

    printf("Height is %d\n",height(root));

    printf("counting leaf node  is %d",counting(root));


    printf("Counting who is having both node is %d\n",counting1(root));


    printf("counting who is having degree both and single chiildren is %d\n:",counter(root));

    printf("counting who is having one is %d\n:",one(root));
    return 0;

}