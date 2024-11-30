//WAP to Binary to decimal conversion & decimal to binary  for a given number as per user's choice
 int number,choice;
   printf("1.binary to decimal\n");
   printf("2. decimal to binary\n");
   printf("enter  a choice:");
   scanf("%d",&choice);
   if(choice==1){
       printf("enter a binary:");
       scanf("%d",&number);
       int base=1,decimal=0,lastdigit;
       while(number>0){
           lastdigit=number%10;
           number=number/10;
           decimal+=lastdigit*base;
           base=base*2;
       }
       printf("decimal:\n",decimal);
   }
   else if(choice==2){
       printf("enter a decimal:");
       scanf("%d",&number);
       int binary[32];
       int index=0;
       while(number>0){
          binary[index]=number%2;
           number=number/2;
           index++;
       }
       printf("binary:");
       for(int i=index-1;i>=0;i--){
           printf("%d",binary[i]);
       }
   }
   else {
       printf("not a valid choice:");
   }
