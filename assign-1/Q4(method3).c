//WAP to accept two integer numbers and swap them using 4 different methods in C language
#include<stdio.h>
int main (){
   int a , b,temp;
   printf("enter the first number :");
   scanf("%d",&a);
   printf("enter the second number :");
   scanf("%d",&b);
   printf("before swapping the number a= %d,b=%d\n",a,b);
   temp=b;
  b=a;
  a=temp;   
   printf("after swapping the number a = %d,b=%d",a,b);
   return 0 ;
}
