#include<stdio.h>
int main()
{
int ts1,ts2,ts3;

printf("Enter the value of Side 1 = ");
scanf("%d",&ts1);
printf("Enter the value of Side 2 = ");
scanf("%d",&ts2);
printf("Enter the value of Side 3 = ");
scanf("%d",&ts3);

if(ts1 == ts2 && ts2 == ts3)
{
    printf("THIS IS A EQUILATERAL TRIANGLE");
}
else if(ts1 == ts2 && ts2 !=ts3)
{
    printf("THIS IS A ISOSCELES TRIANGLE");
}
else
{
    printf("THIS IS A SCELENE TRIANGLE");
}


    return 0;
}