//WAP to increase every student mark by 5 & then print the updated array.
#include<stdio.h>
int main() {
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("marks of %d student is :\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
       printf("marks of %d student is %d\n",i+1,arr[i]+5);
}
    return 0;
}
