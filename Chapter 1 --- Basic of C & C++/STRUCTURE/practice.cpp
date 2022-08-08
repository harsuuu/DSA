#include<stdio.h>
#include<iostream>
using namespace std;

struct Ractangle
{
    int length;
    int breadth;
};
int main(){
struct Ractangle r;

r.length;
r.breadth;
printf ("Enter the length\n");
scanf("%d",&r.length);
printf("Enter the breadth]\n");
scanf("%d",&r.breadth);

printf("%d\n",r.length*r.breadth);
printf("%d\n",sizeof(r.length+r.breadth));   /* integer ka size 4 bytes hota hai and
                                      dono ka milaker 8 bytes hoga dono mtlb
                                      (4 bytes int length and 4 bytes int breadth)*/

return 0;
}

