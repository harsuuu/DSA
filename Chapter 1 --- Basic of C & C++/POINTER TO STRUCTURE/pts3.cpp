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
   struct ractangle *p;
   p=(struct ractangle*) malloc(sizeof (struct ractangle));
// c++ m ise p=new rectangle; likhenge
   (*p).length=10;
   (*p).breadth=5;

printf("%d\n",(*p).length);
printf("%d\n",(*p).breadth);

}