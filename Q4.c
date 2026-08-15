//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    int r,a,c;
    printf("Enter the radius of the circle ");
    scanf("%d",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Area of the circle is %d\n",a);
    printf("Circumference of the circle is %d\n",c);
    return 0;
}