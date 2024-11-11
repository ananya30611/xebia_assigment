//WAP to subtract two integers without using Minus (-) operator.
#include<stdio.h>
int main (){
    int a , b ;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    while(b!=0){
        int borrow =(~a)&b;
        a=a^b;
        b= borrow<<1;

    }
    printf("subtraction these two number is %d",a);
    return 0 ;
}