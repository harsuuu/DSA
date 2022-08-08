#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
  int A[5]={5,3,7,8,4};
  int *p;
  p=A;    // yha p=&A nhi likhenge ha agr likhna hai to aise likh skte p=&A[1] etc..
   
 for(int i=0;i<5;i++)
 printf("%d\n",p[i]);       // access using pointer just say p inplace of A
 // printf("%d\n",A[i]);    ye hai without using pointer
 // cout<<p[i]<<endl;          c++ m aise krenge
return 0;
}
