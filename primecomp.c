#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number = ");
    scanf("%d",&num);
    
 for(i=2;i%num;i=i+2)
 {
    if(i%num)
    {
        printf("\nyour number is a prime number");
    }
    num++;
      break;
    
 }   
}