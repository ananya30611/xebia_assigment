//wap to read two integers and print their HCF(Higest common factor)
#include<stdio.h>
int hcf(int num1, int num2)
{
    int hcf1=1;
    for (int i =1 ; i<=num1||i<=num2;i++)
    {
        if((num1%i)==0 &&(num2%i)==0)
        {
            hcf1=i;
        }
    }

   return hcf1; 
}
int main ()
{
 int number1 , number2 ; 
 printf("enter the first number :");
 scanf("%d",&number1);
 printf("enter the second number :");
 scanf("%d",&number2);
 printf("the hcf of the number is %d .\n",hcf(number1,number2));
 return 0 ;
}