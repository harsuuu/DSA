// method for displayinng the array
#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of an array";
    cin>>n;;
    int A[n];
    A[0]=5;
    
    for(int x:A)                // ye bhi ek  method hai jisme x , A se value le rha hai
    {

        cout<<x<<endl;          // c++ ke liye printf hota hai
        
    }
    return 0;
}
        //note: iska output A[0] pr 5 hoga baki m garbage value jitne hm size lenge