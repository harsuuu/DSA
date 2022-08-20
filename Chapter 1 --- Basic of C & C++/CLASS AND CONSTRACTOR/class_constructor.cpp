#include<stdio.h>
#include<iostream>
using namespace std;
struct Ractangle
{
int length;
int breadth;

// these three fuction is working for structure write them in structured
void initialise (int l, int b)      //jb ander hai structure k to direct le skte hai (int l, int b)
{
       length=l;
       breadth=b;
}
int area ()       //yha breakets m length and breadth nhui aayega qki bo structure m h to struct rectangle aayega
{
      return length*breadth;
}
int perimeter( )    //c++ m struct likho ya mt likho
{
    int p;
    p= 2*(length+breadth);
    return p;
}
};
/* we have included all three function which is working for a 
ractangle inside a retangle structure now they can directly access 
length and breadth */
int main()
{
   struct Ractangle r;
    int l,b;
    printf("Enter the length and breadth");
    cin>>l>>b;

     r.initialise( l, b);         //object
     int a =r.area();                    
     int c =r.perimeter();        
    printf("area is %d\n",a);
    cout<<"perimeter is "<<c<<endl;
} 

/* CLASS --> wrinting the data memeber and all the member function
together at a single place we can define a class */