#include<stdio.h>
int main()
{
    
float purval,a,b,c;

printf("ENTER THE PURCHASE VALUE = ");
scanf("%f",&purval);
a=purval*0.05;
b=purval*0.07;
c=purval*0.10;

if(purval>5000 && purval<6000)
{
    printf("THE DISCOUNT YOU GOT =%f",a);
}
if(purval>6000 && purval<10000)
{
    printf("THE DISCOUNT YOU GOT =%f",b);

}
if(purval>10000)
{
    printf("THE DISCOUNT YOU GOT =%f",c);

}
    return 0;

}