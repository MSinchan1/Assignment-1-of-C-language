#include<stdio.h>
int main()
//Delete the second last digit x=2134674--213464 
{
    int a,b;
    printf("Enter an Integer");
    scanf("%d",&a); //2134674
    b=a-(a/10)*10; //4
    a=(a/10)/10; //21346
    printf("%d",a*10+b); //21346*10+4
    return 0;
}