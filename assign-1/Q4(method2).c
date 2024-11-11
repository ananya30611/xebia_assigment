//WAP to accept two integer numbers and swap them using 4 different methods in C language 
#include<stdio.h>
int main (){
    int a,b;
    printf("enter the  first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("Before swapping the number a = %d ,b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swapping the numbers a = %d , b =%d",a,b);
  return 0 ;
    
}
