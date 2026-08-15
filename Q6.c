//Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the vakue of b");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Value of a after swapping a=%d\n , Value of b after swapping b=%d\n",a,b);
    return 0;
}