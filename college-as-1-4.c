#include<stdio.h>
//Write a program to delete the last digit.input 13613 output 1361, input 324 out put 32,
int main()
{
    int a,b;
    printf("Enter an integer");
    scanf("%d",&a); //13613
    b=a/10; //1361
    printf("New number is %d",b);
    return 0;
}
