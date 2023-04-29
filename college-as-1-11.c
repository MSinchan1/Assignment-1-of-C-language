#include<stdio.h>
//Exchange last two digits,23617-23671,27845345-27845354
int main()
{
    int a,x,y,z;
    printf("Enter an integer");
    scanf("%d",&a); //23617
    x=a/10;  //2361
    y=a%10; //7
    z=x/10; //236
    a=x%10; //1
    printf("%d",(z*10+y)*10+a); //(236*10+7)*10+1
    return 0;  
}
