                //FOR C++ 
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int*p;

    p=new int[5];         //c++ m malloc function aise use krte hai

    p[0]=5;p[1]=10;p[2]=15;p[3]=20;p[4]=25;

    for(int i=0;i<5;i++)
    printf("%d\n",p[i]);

return 0;

delete[] p;            //deallocating the memory
} 
