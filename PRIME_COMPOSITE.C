#include<stdio.h>
int main()
{
 int a,i=2;
 printf("Enter the number = ");
 scanf("%d",&a);
if(a % i==1 || a % a==1)
{
    
    printf("It is a prime number");
}
else if(a==2)
{
    printf("It is a prime number");
}
else
{
    printf("It is a composite number");
}


    return 0;
}