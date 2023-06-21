#include<stdio.h>
int swap(int *x , int *y);
int main()
{
 int a,b,swa;
 printf("Enter the value of a = ");
 scanf("%d",&a);
 printf("Enter the value of b = ");
 scanf("%d",&b);
 printf("\nBefore swapping value of a =%d",a);
 printf("\nBefore swapping value of b =%d",b);
 swap(&a,&b);
 printf("\nAfter swapiing value of a =%d",a);
 printf("\nAfter swapping value of b =%d",b);
 


    return 0;
}
int swap(int *x,int *y)
{
  
    int
    c=*x;
    *x=*y;
    *y=c;
}

