#include<stdio.h>
//Find the quotient and remainder.
int main()
{
    int a,b,x,y;
    printf("Enter two number");
    scanf("%d%d",&a,&b); //120,9
    x=a/b; //13
    y=a%b; //3
    printf("Quotient is %d\nRemainder is %d",x,y);
    return 0;
}