#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int A[7];
    A[0]=2;
    A[1]=4;
    A[2]=6;
    A[3]=8;
    A[4]=10;
    A[5]=12;
    A[6]=14;
    cout<<sizeof(A)<<endl;
    cout<<A[5]<<endl;
    printf("%d",A[6]);
    return 0;
}
