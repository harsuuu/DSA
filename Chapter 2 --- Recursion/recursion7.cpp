#include<iostream>
using namespace std;
void fun(int n)
{
    while(n>0)
    {
        printf("%d\n",n);
        n--;;
    }
}
int main(){
int x=5;
fun(x);

return 0;
}