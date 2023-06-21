#include<stdio.h>

void french();
void indian();

int main()
{
    char i;
    
    printf("Enter the letter ");
    scanf("%c",&i);
    if(i =='I')
    {
       french();
    }
    else if(i == 'N')
    {
        indian();
    }
    else
    {
        printf("!!!!! Please enter a correct value !!!!!");
    }

    return 0;
}
void french()
{
    printf("Hello I am french");
}
void indian()
{
    printf("Namaste I am indian");
}