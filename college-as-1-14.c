#include<stdio.h>
//Read two numbers.Find their product after exchanging their last digits. 
//Input 4270 and 153 output 640950(4273*150).Input 348 and 31 output 12958(341*38).
int main()
{
    int a,b,c,d,x;
    printf("Enter two integer");
    scanf("%d%d",&a,&b); // 4270 and 153
    d=a/10; //427
    x=a%10; //0
    c=b%10; //3
    b=b/10; //15
    printf("%d",((d*10+c)*(b*10+x))); //((427*10+3)*(15*10+0))
    return 0;
}