#include<stdio.h>
int main()
{
    int  b,h, area;
    printf("Enter base");
    scanf("%d", &b);
    printf("Enter height");
    scanf("%d", &h);

    area = 0.5*(b*h);
    printf("area of triangle is %d", area);
    return 0;
}