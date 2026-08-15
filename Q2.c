//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int a,b,s,p,d,q;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    s=a+b;
    d=a-b;
    p=a*b;
    q=a/b;
    printf("Sum of a and b is %d\n",s);
    printf("Difference of a and b is %d\n",d);
    printf("Product of a and b is %d\n",p);
    printf("Quotient of a and b is %d\n",q);
    return 0;
}