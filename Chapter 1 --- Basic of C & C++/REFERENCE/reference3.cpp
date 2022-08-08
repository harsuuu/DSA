#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;  
    r  =25;          //declaring reference using & before varrible
    cout<<a<<endl;
    return 0;
}
