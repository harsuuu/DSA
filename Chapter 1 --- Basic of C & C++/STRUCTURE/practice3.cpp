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

return 0;
}

//OR  --> We can declare like this also

#include<stdio.h>
#include<iostream>
using namespace std;

struct Ractangle
{
    int length;
    int breadth;
};
struct Ractangle r;
int main(){

r.length;
r.breadth;
printf ("Enter the length\n");
scanf("%d",&r.length);
printf("Enter the breadth]\n");
scanf("%d",&r.breadth);

printf("%d\n",r.length*r.breadth);

return 0;
}

//OR-->We can declare like this

#include<stdio.h>
#include<iostream>
using namespace std;

struct Ractangle
{
    int length;
    int breadth;
}r;

int main(){

r.length;
r.breadth;
printf ("Enter the length\n");
scanf("%d",&r.length);
printf("Enter the breadth]\n");
scanf("%d",&r.breadth);

printf("%d\n",r.length*r.breadth);

return 0;
}
