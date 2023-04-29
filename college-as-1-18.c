#include<stdio.h>
//Exchange last two digits.Input -2134674 Output-2134647.
int main()
{
    int a,b,c,d,e;
    printf("Enter an integer");
    scanf("%d",&a); //2134674
    b=a-(a/10)*10; //4
    c=(a-(a/100)*100)/10; //7
    a=(a/100); //21346
    printf("%d",(a*10+b)*10+c); //(21346*10+4)*10+7
    return 0;
}