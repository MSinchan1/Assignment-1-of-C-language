#include<stdio.h>
//Find the second last digit .Let x=2134674 the second last digit is 7.
int main()
{   
    int a;
    printf("Enter an Integer");
    scanf("%d",&a); //2134674
    a=a/10; //213467
    a=a-a/10*10; // 213467-21346*10
    printf("The second last digit is %d",a); //7
    return 0;
}