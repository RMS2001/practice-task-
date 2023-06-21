#include<stdio.h>

int main (){

int p,r,y,t;
// taking intiger p(amoumt),r(roi),y(period of time),t(int for formula)
printf("Enter the principal amount = ");
scanf("%d",&p);
//taking user input for principle amount
printf("Enter the rate of intrest = ");
scanf("%d",&r);
//taking user input for rate of intrest
printf("Enter the time period = ");
scanf("%d",&y);
//taking user input for period of time
t=(p*r*y)/100;
// implimenting simple intrest formula
printf("Total intrest =%d",t);
//total output for simple intrest

    return 0;

}