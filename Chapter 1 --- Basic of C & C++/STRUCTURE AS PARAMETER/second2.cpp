//BY CALL BY ADDRESS
// CREATING A FUCNCTION IN HEAP 
#include<stdio.h>
#include<iostream>
using namespace std;

struct Ractangle
{
    int length;
    int breadth;
};
struct Ractangle *fun(){
    struct Ractangle *p;
    p=new Ractangle;                                                  // IN 'c++'
    //p=(struct Racangle*)malloc(sizeof(struct Ractangle));           //IN 'c'

    p->length=15;
    p->breadth=20;
    
    return p;
}
int main()
{
   struct Ractangle *ptr=fun();
   cout<<"length :"<<ptr->length<<endl;
   cout<<"breadth :"<<ptr->breadth<<endl;
}