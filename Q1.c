//Q1: Write a program to input two numbers and display their sum.
#include<stdio.h>
int main()
{
    int a,b,s;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    s=a+b;
    printf("Sum of a and b is %d\n",s);
    return 0;
}