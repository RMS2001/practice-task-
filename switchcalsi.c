#include<stdio.h>
int main()
{
 char cal;
 int a,b;
  printf("Enter the first number = ");
  scanf("%d",&a);
  printf("Enter the second number = ");
  scanf("%d",&b);
  printf("Enter the sign of calculation :- ");
  scanf("%s",&cal);

switch(cal)
{
    case '+':
    printf("Total =%d",a+b);
    break;

    case '-':
    printf("Total =%d",a-b);
    break;

    case '*':
    printf("Total =%d",a*b);
    break;

    case '/':
    printf("Total =%d",a/b);
    break;
    
    default:
    printf("Please enter a valid calculation sign");
}

    return 0;
}
