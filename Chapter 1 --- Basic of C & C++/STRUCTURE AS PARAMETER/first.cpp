//BY CALL BY VALUE
#include<stdio.h>
#include<iostream>
using namespace std;

struct Ractangle
{
    int length;
    int breadth;
};
void fun(struct Ractangle r)
{
    cout<<"length :"<<r.length<<endl;
    cout<<"breadth :"<<r.breadth<<endl;
}
int main()
{
    struct Ractangle r ={10,5};
    fun(r);
    printf("length is: %d\n",r.length);
    printf ("breadth is: %d\n",r.breadth);
}