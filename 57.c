#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("swapping of two numbers");
    printf("1st number");
    scanf("%d",&a);
    printf("2nd number");
    scanf("%d",&b);
    printf("before swapping");
    temp=a;
    a=b;
    b=temp;
    printf("after swapping\n%d\n%d",a,b);
    return 0;    
}
