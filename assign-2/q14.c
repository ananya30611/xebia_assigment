/*Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1 */
#include<stdio.h>
int main ()
{
    int num,temp;
    printf("How many elements in the array?\nEnter the number:");
    scanf("%d",&num);
    int arra[num];
    for (int i=0;i<num;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arra[i]);
    }
    printf("Array before the rotation:\t");
    for (int i=0;i<num;i++)
    {
        printf("%d\t",arra[i]);
    }
    temp=arra[num-1];
    for(int i=num;i>=0;i--)
    {
        arra[i+1]=arra[i];
    }
    arra[0]=temp;
    printf("\nArray after the rotation:\t");
    for (int i=0;i<num;i++)
    {
        printf("%d\t",arra[i]);
    }
    return 0;
}
