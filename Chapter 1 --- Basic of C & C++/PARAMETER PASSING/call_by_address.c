#include<stdio.h>
void swap (int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Ente the value of b: ");
    scanf("%d",&b);
    
    swap(&a,&b);
    printf("%d %d",a,b);
}

//isme swap hoga qki call by address se kiya gya hai