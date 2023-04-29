#include<stdio.h>
//Exchange last and third last digit. Input-2134674, Output-2134476
int main()
{
     int a,b,c,d;
    printf("Enter an integer");
    scanf("%d",&a); //2134674
    b=a-(a/10)*10;  //(2134674-2134670)=4
    c=(a-(a/100)*100)/10; //(2134674-21346)/10=7
    d=(a-(a/1000)*1000)/100; //(2134674-2134)/100=6
    a=a/1000; //2134
    printf("%d",((a*1000+b*100)+c*10)+d); //((2134*1000+4*100)+7*10+6)=2134476
    return 0;  
}