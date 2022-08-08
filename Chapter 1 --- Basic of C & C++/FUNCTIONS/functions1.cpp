#include<stdio.h>
#include<iostream>

using namespace std;

int add(int a, int b){
    int c;
    c= a+b;
    return c;

}
int main()
{
    int x;
    int y;
    int z;
     x=10;
     y=5;
    z=add(x,y);               
   // printf("%d",z);        // for "C"
   cout<<z<<endl;            //for c++

   return 0;
}