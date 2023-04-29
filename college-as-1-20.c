#include<stdio.h>
//Read one more integer(k) and print kth last digit. Let x=2134674,For K=5 the output is 3.
int main()
{
    int a,k;
    printf("Enter an Integer and a num");
    scanf("%d%d",&a,&k); //2134674,5
    for(int i=1;i<k;i++)
    {
     a/=10;
    } //213
    printf("%d",a%10); //3
    return 0;
}