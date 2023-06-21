#include<stdio.h>
int square(int num);
int main()
{
 int a,sq;
 printf("Enter the intger = ");
 scanf("%d",&a);
 sq=square(a);
 printf("%d",sq);

    return 0;
}
int square(int num)
{
   return num * num ;

}