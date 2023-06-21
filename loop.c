#include <stdio.h>
int main()
{
int num,i;
printf("Enter your number = ");
scanf("%d",&num);
printf("************ Odd numbers are**********");
for(i=0;i<=num;i=i+2)
{
    printf("%d\n",i);

}
printf("************ Even numbers are ***********");

for(i=1;i<=num;i=i+2)
{
    printf("%d\n",i);
    
}
    return 0;
}