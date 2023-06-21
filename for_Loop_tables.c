#include<stdio.h>
int main()
{
 int a,i;
 printf("Enter the table you want =");
 scanf("%d",&a);
 for(i=1;i<=10;i++)
 {
    printf("\n%d * %d =%d",a,i,i*a);

 }    
    return 0;
}