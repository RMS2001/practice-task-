#include<stdio.h>
int main()
{
 int a,i;
 printf("Enter the integer = ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
    printf("\nThe number is=%d",i);
    printf("\nThe cube of the given integer =%d",i*i*i);
    
 }


    return 0;
}