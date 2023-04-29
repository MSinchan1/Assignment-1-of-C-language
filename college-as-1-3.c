#include<stdio.h>
//Join a digit and a number
int main()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b); //42315,9
    c=a*10+b; //42315*10+9=423159
    printf("New number is %d",c);
    return 0;
}
