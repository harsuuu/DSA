//Another method for displayinng the array
#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int A[10]={1,2,3,4,5};
    
    for(int x:A)                // ye bhi ek  method hai jisme x , A se value le rha hai
    {

        cout<<x<<endl;          // c++ ke liye
        
    }
    return 0;
}
