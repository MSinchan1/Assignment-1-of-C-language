#include<stdio.h>
//Write a program to delete th second last digit.23617-2367,2365-235.
int main()
{
    int a,x;
    printf("Enter an integer");
    scanf("%d",&a); //23617
    x=a/100; //236
    a=a%10; //7
    printf("%d",x*10+a); //236*10+7=2367
    return 0;
}