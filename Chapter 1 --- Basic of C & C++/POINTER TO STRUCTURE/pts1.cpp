#include<stdio.h>
#include<iostream>

using namespace std;

struct  ractangle
{
    int length;
    int breadth;
};

int main()
{
    struct ractangle r={10,5};

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    struct ractangle *p=&r;
    cout<<(*p).length<<endl;
    cout<<(*p).breadth<<endl;

}