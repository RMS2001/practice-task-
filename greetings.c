#include<stdio.h>
int main()
{
    int a;
    printf("\nENTER THE FOLLOWING NUMBER TO GET GREETED BY ME");
    printf(" \nA NUMBER GREATER THAN 20 - GOOD MORNING");
    printf(" \nA NUMNER SMALLER THAN 20 - GOOD AFTERNOON");
    printf(" \nTHE NUMBER 20 - GOOD NIGHT");
    printf("\nENTER YOUR NUMBER = ");
    scanf("%d",&a);

 if (a>20)
 {
    printf("GOOD MORNING");
 }
 else if(a<20)
 {
    printf("GOOD AFTERNOON");
 }
 else
 {
    printf("GOOD NIGHT");
 }
    
    return 0;
}