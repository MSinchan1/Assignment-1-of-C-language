#include<stdio.h>
//Read a number.Find product after deleting last and second last digits.Input 4358 output 190530(438*435)
int main()
{
    int a,b,c,d;
    printf("Enter an integer");
    scanf("%d",&a); //4358
    b=a/10; //435
    c=b/10; //43
    d=a%10; //8
    a=c*10+d; //438
    printf("%d",a*b); //438*435=190530
    return 0;
}