#include<stdio.h>
void oe(int x);
int main()
{
 int a;
 printf("Enter the number = ");
 scanf("%d",&a);
 oe(a);

    return 0;
}
void oe(int x)
{
    if(x % 2==0)
    {
        printf("It is an even number");
    }
    else
    {
        printf("It is an odd number");
    }
}