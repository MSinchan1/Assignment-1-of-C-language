#include<stdio.h>
//Find the last digit of a number and delete the last digit.
int main()
{
    int a,b,c;
    printf("Enter an Integer Number");
    scanf("%d",&a); //1234
    b=a%10; //4
    c=a/10; //123
    printf("The last digit is %d\nNew number is %d",b,c);  
    return 0;
}
