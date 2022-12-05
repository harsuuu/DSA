#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};


void display( struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<"Number in Array is:"<<arr.A[i]<<endl;
    }
}


int main()
{
    struct Array arr;

    cout<<"Enter the size of an array: "<<endl;
    cin>>arr.size;

    arr.A= new int [arr.size];     //arr.A=(int*)malloc(arr.size*sizeof(int));

    arr.length=0;

    int n;

    cout<<"Enter how many number which you want to insert in an array :"<<endl;
    cin>>n;

    cout<<"Enter the element :"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr.A[i];   //scanf("%d",&arr.A[i]);
    }

    arr.length=n;

    display(arr);
}