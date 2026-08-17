//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    int tseconds,hours,minutes,seconds;
    printf("Enter the time in seconds: ");
    scanf("%d",&tseconds);
    hours=tseconds/3600;
    minutes=(tseconds%3600)/60;
    seconds=tseconds%60;
    printf("time in hours:minutes:seconds is %d:%d:%d\n",hours,minutes,seconds);
    return 0;
}