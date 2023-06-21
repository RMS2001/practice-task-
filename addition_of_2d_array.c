#include<stdio.h>
int main()
{
int a[2][2],b[2][2],c[2][2],d[2][2],e[2][2],f[2][2],g[2][2],i,j;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("Enter the elements of a = ");
        scanf("%d",&a[i][j]);
    }
}    

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("Enter the elements of b = ");
        scanf("%d",&b[i][j]);
    }
}  
for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf(" %d",a[i][j]);
    
    }
    printf("\n");

}
for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf(" %d",b[i][j]);
    
    }
    printf("\n");

} 
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
       c[i][j]=a[i][j]+b[i][j];
       printf(" %d",c[i][j]);
    }
    printf("\n");
}  
    return 0;

}
