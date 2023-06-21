#include<stdio.h>
float add(int a);
int main()
{
    float a,b;
    printf("enter the radius of the circle = ");
    scanf("%f",&a);
    b=add(a);
    printf("%f",b);
   
    return 0;
}
float add(int a)
{
     return 3.14*a*a;
     
}