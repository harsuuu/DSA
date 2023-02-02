#include<iostream>
using namespace std;

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
        first=new Node;
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

void middle(struct Node *slow)
{
    struct Node *fast=first;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<endl;
}

int main()
{
    int A[]={1,2,3,4,5};
    create (A,5);

    
    middle(first);

    return 0;
}

