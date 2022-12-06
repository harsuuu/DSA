#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Append(struct Array *arr)   //As it will modify the array than it should call by reference.
{
    int x;
    cout<<"Enter the value which you want to append :";
    cin>>x;

    arr->A[arr->length]=x;
    arr->length++;

}

void display( struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<"Number in Array is:"<<arr.A[i]<<endl;
    }
}


int main()
{
    struct Array arr={{1,2,3,4,5},10,5};    //isme phle array hai and 10 --> array ka size and 5--> length means Number of elements in Array.

   /* cout<<"Enter the size of an array: "<<endl;
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
*/
    Append(&arr);
    display(arr);
}