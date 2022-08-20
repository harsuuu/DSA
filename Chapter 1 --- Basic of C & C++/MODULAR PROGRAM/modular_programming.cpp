//Modular programb and procedural programming --> write the code in small small function(Break this main function in small function)
#include<stdio.h>
#include<iostream>
using namespace std;
int area (int length , int breadth)
{
      return length*breadth;
}
int perimeter(int length , int breadth)
{
    int p;
    p= 2*(length+ breadth);
    return p;
}
int main()
{
    int length, breadth, a,b;
    printf("Enter the length and breadth");
    cin>>length>>breadth;
     a=area(length ,  breadth);        //caling function
     b=perimeter(length , breadth);    //calling function
    printf("area is %d\n",a);
    cout<<"perimeter is "<<b<<endl;
}