//for displayinng the array
#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int A[5]={1,2,3,4,5};
    
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%d\n",A[i]);      // c ke liye
        cout<<A[i]<<endl;         // c++ ke liye printf
        
    }
    return 0;
}
