                   // FOR C
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int*p;

    p=(int*)malloc(5*sizeof(int));         /*yha  hmne dinemcally memory
                                            array ke liye, heap m bnaii malloc
                                            function use krke to jb hme ise finished 
                                            krenge to last m ise dlete bhi krna chaiye,
                                            dlt krne ke liye last m  "free(p)" c ke liye 
                                            and c++ ke liye delete[] p lgayenge*/
                                        

    p[0]=5;p[1]=10;p[2]=15;p[3]=20;p[4]=25;

    for(int i=0;i<5;i++)
    printf("%d\n",p[i]);

    free(p);       /*this is for deallocating the memory that is 
                    allocated in a heap means heap memory should 
                    be dealloacted and as the program is small if
                    we will not write free(p) noting will happen */
return 0;

}
