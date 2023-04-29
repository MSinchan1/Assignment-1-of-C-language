#include<stdio.h>
//Write a program to print the second last digit.Input 83613 output 1,Input 427 output 2.
int main()
{
    int a;
    printf("Enter an integer");
    scanf("%d",&a); //83613
    a=(a/10)%10;// 1
    printf("%d",a);
    return 0;
}
