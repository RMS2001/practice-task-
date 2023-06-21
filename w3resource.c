#include<stdio.h>
int main()
{
 int a,i;
 printf("Enter the number which table you want = ");
 scanf("%d",&a);
 table:
 printf("\n%d * %d =%d",a,i,a*i);
 i++;
 if(i<=10)
 goto table;

    return 0;
}

