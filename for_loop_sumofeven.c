#include<stdio.h>
int main()
{
 int a,sum=0,i;
 printf("Enter the integer = ");
 scanf("%d",&a);
 for(i=2;i<=a;i=i+2)
 {
    printf("%d\n",i);
    sum=sum+i;
}
 printf("\nTotal =%d",sum);
    return 0;
}