#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;            
    int b=15;
    r=b;           /*yha r ki value ho gyi 15 hmne uper likha hai  r hai a 
                    mtlb r and a ki value 15 ho jayegi*/
    cout<<a<<endl<<r<<endl;
    return 0;
}
