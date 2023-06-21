#include<stdio.h>

int main()
{
 int marks;

 printf("Enter Your Obtained marks = ");
 scanf("%d",&marks);

  if(marks>90 && marks<100)
 {
    printf("Your Grade is A++");
 }
 else if(marks>80 && marks<90)
 {
    printf("Your Grade is A");
   
 }
 else if(marks>70 && marks<80)
 {
    printf("Your Grade is B++");
   
 }
 else if(marks>60 && marks<70)
 {
    printf("Your Grade is B");
   
 }
 else if(marks>50 && marks<60)
 {
    printf("Your Grade is C++");
   
 }
 else if(marks>40 && marks<50)
 {
    printf("Your Grade is C");
 }
 else if(marks>30 && marks<40)
 {
    printf("Your Grade is D++ ");
 }
 else if(marks>20 && marks<30)
 {
    printf("Your Grade is D");
 }
 else if(marks>10 && marks<20)
 {
    printf("Your Grade is E");
 }
 else if(marks>0 && marks<10)
 {
    printf("Your Grade is F");
 }
    return 0;
}

