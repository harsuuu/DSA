#include<stdio.h>
#include<iostream>


using namespace std;

struct rectangle{
    int length;
    int breadth;

};

int main(){
    int *p1;
    float *p2;
    double *p3;
    char *p4;
    struct rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
 
return 0;
}
 /*pointer same amount of memory leta hai chahe datatype
 koi sa bhi ho mtlb sbka size 4 hi hoga means pointer 
 is independent of data types*/

