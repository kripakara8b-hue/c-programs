#include<stdio.h>
int main()
{
    int num1=3,num2=5;
    printf("Initialize the value of num1=%d and num2=%d",num1,num2);
    num1 += num2 * 4 - 7;
    printf("\n After the evaluation of expression num1=%d and num2=%d",num1,num2);
    return 0;
}
