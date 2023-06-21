#include<stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter number A = ");
    scanf("%d", &a);

    printf("Enter number B = ");
    scanf("%d", &b);
    
    printf("Enter number C = ");
    scanf("%d", &c);

    if (a < b)
    {
        if (a < c)
        {
            printf("A is the minimum number");
        }
        else
        {
            printf("C is the minimum number");
        }
    }
    else if (b < c)
    {
        printf("B is the minimum number");
    }
    else
    {
        printf("C is the minimum number");
    }

    return 0;
}
