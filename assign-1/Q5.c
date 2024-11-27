//WAP to check whether number is Perfect Number or not.
//(to check the perfect number we have to find all the divisor of that the number and find their sum ,if sum of divisor is equal to the number it means number is the perfect number )

#include<stdio.h>
int main (){
        int a,sum=0;
printf("enter the number:");
scanf("%d",&a);

for(int i=1;i<=a/2;i++){
    if(a%i==0){
        sum+=i;
    }
}
if(sum==a){
    printf("%d is a perfect number",a);
}
else{
    printf("%d is not a perfect number",a);
}
return 0;
}



