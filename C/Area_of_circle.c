#include<stdio.h>
int main()
{
    int r;

    printf("Enter value of radius");
    scanf("%d",&r);

    float  area = 3.1415*r*r;
    printf("%f area of circle", area);
    return 0;
}