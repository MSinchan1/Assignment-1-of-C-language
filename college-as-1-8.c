#include<stdio.h>
//Write a program to double the last digit,e.g. 23613-23616. 324-328(last digit<5)
int main()
{
    int a,x;
    printf("Enter an integer");
    scanf("%d",&a); //23613
    x=a%10; //3

        a=a+x; //23613+3+23616
        printf("%d",a);
    return 0;
}
