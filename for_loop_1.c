#include<stdio.h>
int main()
{
 int a,sum=0,i;
 printf("Enter the integer = ");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
    printf("%d\n",i);
    sum=sum+i;
}
 printf("\nTotal =%d",sum);
 printf("\nThe average of the given number =%d",sum/a);



    return 0;
}