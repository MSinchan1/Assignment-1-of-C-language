#include<stdio.h>
//Program to find the sum of last two digits.Input 83613 output 1+3=4 and input 427 output 2+7=9
int main()
{
    int a,x;
    printf("Enter an Integer");
    scanf("%d",&a); //83613
    x=a%10; //3
    a=a/10; //8361
    a=a%10; //1
    printf("Sum of last two digits %d",x+a); //1+3=4
    return 0;
}