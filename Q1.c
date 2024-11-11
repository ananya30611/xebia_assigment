//WAP to check whether a given is armstrong or not
#include<stdio.h>
#include<math.h>
int main (){
    int num,originalnum,remainder,count=0;
    double result = 0.0;
    printf("enter the number :");
    scanf("%d",&num);
    originalnum=num;
    while(num>0){
        num/=10;
        count++;

    }
num=originalnum;
while(num>0){
    remainder=num%10;
    result=pow(remainder,count);
    num/=10;
}
if(result==originalnum){
    printf("%d is a armstrong number",originalnum);

}
else{
    printf("%d is not an armstrong number",originalnum);
}

 return 0 ;
}
