//WAP to accept two integer numbers and swap them using 4 different methods in C language
#include<stdio.h>
int main (){
    int a , b ;
    printf("enter the number :");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
     printf("before swapping a=%d,b=%d\n",a,b);
     int *ptrA ;
     int *ptrB ;
     ptrA = &a;
     ptrB = &b;
     int temp = *ptrA;
     *ptrA = *ptrB;
     *ptrB = temp;
     printf("After swapping: a = %d, b = %d\n", *ptrA, *ptrB);
     return 0 ;
     
}
