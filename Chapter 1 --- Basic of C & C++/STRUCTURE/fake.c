#include<stdio.h>
 
struct Employee
{
    int number;
    int pincode;
    char name[20];
    char state[20];
    char city[10];
    
};
 
int main(){
    struct Employee e;
    e.number;
    e.pincode;
    e.name;
    e.state;
    e.city;
 
 printf("Enter number");
 scanf("%d\n",&e.number);
 printf("Enter pincode");
 scanf("%d\n",&e.pincode);
 printf("Enter name");
 scanf("%s\n",&e.name);
 printf("Enter state");
 scanf("%s\n",&e.state);
 printf("Enter city");
 scanf("%s\n",&e.city);
 
printf("%d\n",e.number);
printf("%d\n",e.pincode);
printf("%s\n",e.name);
printf("%s\n",e.state);
printf("%s\n",e.city);

return 0;
}
