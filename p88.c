#include<stdio.h>
int main()
{
    int year;
    printf("\n Enter the year:");
    scanf("%d", &year);
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("\n Leap year");
    }
    else
    {
        printf("\n Not a leap year");
    }
    return 0;
}
