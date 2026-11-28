#include<stdio.h>
#include<string.h>
int main()
{
        char str1[50],str2[50];
        int i,j,len x;
        printf("Enter string1\n");
        scanf("%s",str1);
        j=0;
        len=strlen(str1);
        for(i=len-1;i>=0;i--);
        {
                str2[j]=str1[i];j++;
        }
        str2[j]='\0';
        printf("The original string=%s\n",str1);
        printf("The reversed string=%s\n",str2);
        x=strcmp(str1,str2);
        if(x==0)
        {
                printf("%s is a palindrome\n",str1);
        }
        else
        {
                printf("%s is not a palindrome\n",str1);
        }
        return 0;
}
