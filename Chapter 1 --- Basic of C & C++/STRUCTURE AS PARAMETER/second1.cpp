//BY CALL BY ADDRESS
#include<stdio.h>
#include<iostream>
using namespace std;

struct Ractangle
{
    int length;
    int breadth;
};
void fun(struct Ractangle *p)
{
    p->breadth=29;
    p->length=24;
    cout<<"length :"<<p->length<<endl;
    cout<<"breadth :"<<p->breadth<<endl;
}
int main()
{
    struct Ractangle r ={10,5};
    fun(&r);
    printf("length is: %d\n",r.length);
    printf ("breadth is: %d\n",r.breadth);
}