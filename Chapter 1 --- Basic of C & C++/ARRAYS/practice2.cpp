#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int A[5];
    A[0]=2;
    A[1]=4;
    A[2]=6;
    A[3]=8;
    A[4]=10;
    
    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d",A[4]);
    return 0;
}
