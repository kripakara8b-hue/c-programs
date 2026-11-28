#include<stdio.h>
#include<string.h>
int main()
{
        char str1[50],str2[50];
        int i,j,len;
        printf("Enter string1\n");
        scanf("%s",str1);
        j=0;
        len=strlen(str1);
        for(i=len-1;i>=0;i--)
                {
                        str2[j]=str1[i];
                        j++;
                }
        str2[j]='\0';
        printf("The reversed string=%s\n",str2);
        return 0;
}
