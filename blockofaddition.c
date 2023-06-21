#include<stdio.h>
void add();
int a;
int b;
int main()
{
   
    printf("Enter the value of first number = ");
    scanf("%d",&a);
     printf("Enter the value of second number = ");
     scanf("%d",&b);
    add();
    

}
   void add()
{
   
    printf("\nTotal =%d",a+b);
}
