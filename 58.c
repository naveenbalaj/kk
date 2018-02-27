#include <stdio.h>
int main()
{
    int a,b;
    printf("swapping of two numbers");
    printf("1st number");
    scanf("%d",&a);
    printf("2nd number");
    scanf("%d",&b);
    printf("before swapping");
    a=a^b;
    b=b^a;
    a=a^b;
    printf("after swapping\n%d\n%d",a,b);
    return 0;    
}

