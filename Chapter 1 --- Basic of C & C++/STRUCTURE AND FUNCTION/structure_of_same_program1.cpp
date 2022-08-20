#include<stdio.h>
#include<iostream>
using namespace std;
struct Ractangle
{
int length;
int breadth;
};
void initialise (struct Ractangle *r, int l, int b)
{
       r->length=l;
       r->breadth=b;
}
int area (struct Ractangle r)       //yha breakets m length and breadth nhui aayega qki bo structure m h to struct rectangle aayega
{
      return r.length*r.breadth;
}
int perimeter( Ractangle r)    //c++ m struct likho ya mt likho
{
    int p;
    p= 2*(r.length+ r.breadth);
    return p;
}
int main()
{
   struct Ractangle r;
    int l,b;
    printf("Enter the length and breadth");
    cin>>l>>b;

     initialise(&r, l, b);
     int a =area(r);               //this "r" means complete Ractangle     //caling function
     int c =perimeter(r);          //calling function
    printf("area is %d\n",a);
    cout<<"perimeter is "<<c<<endl;
} 