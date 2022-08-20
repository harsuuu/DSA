//Monolithic Programming --> isme sara code main function k neeche hota hai
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int length, breadth, area, perimeter;
    printf("Enter the length and breadth");
    cin>>length>>breadth;
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area is %d\n",area);
    cout<<"perimeter is "<<perimeter<<endl;
}