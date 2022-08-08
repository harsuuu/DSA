#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p;
    p=&a;
    printf("%d\n",*p);          //using pointer
    printf("%d\n",p);      
    printf("%d\n",&p);     
    printf("%d\n",&a);
    cout<<a<<endl;;
    cout<<*p<<endl;
    

}
 