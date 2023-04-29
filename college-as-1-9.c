#include<stdio.h>
//Write a program to double the second last digit.Input 23613 output 23623
int main()
{
    int a,z;
    printf("Enter an integer");
    scanf("%d",&a); //23613
    z=a; //23613
    a=a/10; //2361
    a=a%10*10; //1*10=10
    printf("%d",z+a); //23613+10=23623
    return 0;
}