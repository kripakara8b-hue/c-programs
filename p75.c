#include<stdio.h>
int main()
{
        char str[200];
        int i=0,count=0;
        printf("\nEnter the sentence;");
        gets(str);
        while(str[i]!='\0');
        {
                if(str[i]==' ' && str[i+1] !=' ')
                {
                        count++;
                        i++;
                }
                printf("\n The total count of word is;%d",count+1);
                return 0;
        }
}
        
