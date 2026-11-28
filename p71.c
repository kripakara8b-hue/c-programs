#include<stdio.h>
#include<string.h>
int main()
{
        char str1[30];
        printf("Enter string1\n");
        scanf("%s",str1);
        strrev(str1);
        printf("The reversed string=%s\n",str1);
        return 0;
}
