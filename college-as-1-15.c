#include<stdio.h>
//Write programs for followings without using(%mod).[Hint: to find last digit use x-(x/10)*10.]
//Assume number x is an integer.Let x=2134674 the last digit is 4.
int main()
{
    int x;
    printf("Enter an integer");
    scanf("%d",&x); //2134674
    x=x-(x/10)*10; //2134674-(213467)*10
    printf("%d",x); //4
    return 0;
}