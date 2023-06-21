#include<stdio.h>
int main()
{
 int a,b,c,total=0;
 int piz=180,bur=150,ff=100,pr=210,ck=20,tu=20;
 menu:
 {
    printf("*********** MENU ************");
    printf("\n1.PIZZA= 180");
    printf("\n2.BURGER=150");
    printf("\n3.FRENCH FRIES=100");
    printf("\n4.PANEER ROLL=210");
    printf("\n5.COKE=20");
    printf("\n6.THUBS UP=20");
    printf("\nEnter the Item you want = ");
    scanf("%d",&a);
    printf("Enter the desired Quantity = ");
    scanf("%d",&b);
   
    switch(a)
    {
        case 1:
        {
            printf("SIR\nYOU HAVE SELECTED PIZZA ");
            total+=piz*b;
            printf("\nRS=%d",piz*b);
            break;
        }
        case 2:
        {
            printf("SIR\nYOU HAVE SELECTED BURGER ");
            total+=bur*b;
            printf("\nRS=%d",bur*b);
            break;
        }
        case 3:
        {
            printf("SIR\nYOU HAVE SELECTED FRENCH FRIES");
            total+=ff*b;
            printf("\nRS=%d",ff*b);
            break;
        }
        case 4:
        {
            printf("SIR\nYOU HAVE SELECTED PANEER ROLL");
            total+=pr*b;
            printf("\nRS=%d",pr*b);
            break;
        }
        case 5:
        {
            printf("SIR\nYOU HAVE SELECTED COKE");
            total+=ck*b;
            printf("\nRS=%d",ck*b);
            break;
        }
        case 6:
        {
            printf("SIR\nYOU HAVE SELECTED THUBS UP ");
            total+=tu*b;
            printf("\nRS=%d",tu*b);
            break;
        }
     
    }
    printf("\n1.Yes");
    printf("\n2.No");
    printf("\nDo you want to add any other item =");
    scanf("%d",&c);
    if(c==1)
    {
        goto menu;

    }
    else
    {
        printf("\nTotal Payable Amount=%d",total);
         printf("\nThank you for shopping with us");
        printf("\nPlease Visit Again (:");
    }
     
 }

    return 0;
}