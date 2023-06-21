#include<stdio.h>
void prime(int x);
int main()
{
 int a;
 printf("Enter the number = ");
 scanf("%d",&a);
 prime(a);

    return 0;
}
void prime(int x)
{
    if(x % 2==0 || x % x ==1)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is a composite number");
    }
}