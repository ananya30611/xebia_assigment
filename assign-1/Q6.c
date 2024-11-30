//WAP to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>
int main() {

   int n1,n2;
   printf("enter n1:");
   scanf("%d",&n1);
   printf("enter n2:");
   scanf("%d",&n2);
   if(n1>0&&n2>0){
       printf("first quadrant");
   }
   else if(n1<0&&n2>0){
       printf("second quadrant");
   }
   else if(n1<0&&n2<0){
       printf("third quadrant");
   }
   else if(n1>0&&n2<0){
       printf("fourth quadrant");
   }
   else{
       printf("origin");
   }
return 0;
}
