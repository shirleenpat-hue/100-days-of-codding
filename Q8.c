//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int n,s=0,i;
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum of first %d natural numbers is %d",n,s);
    return 0;
}