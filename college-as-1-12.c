#include<stdio.h>
//Exchange the last and the  third last digits,23617-23716,845345-845543
int main()
{
    int a,b,c,x,y,z;
    printf("Enter an integer");
    scanf("%d",&a); //23617
    x=a/10;  //2361
    y=a%10; //7
    z=x/10; //236
    b=x%10; //1
    c=z/10; //23
    a=z%10; //6
    printf("%d",((c*10+y)*10+b)*10+a); //((23*10+7)*10+1)*10+6
    return 0;  
}
