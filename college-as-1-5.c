#include<stdio.h>
//Write a program to delete the last two digits. input 13613 output 136,input 324 output 3 
int main()
{
    int a,b;
    printf("Enter an integer");
    scanf("%d",&a); //13613
    b=a/100; //136
    printf("New number is %d",b);
    return 0;
}