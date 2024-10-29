#include<stdio.h>
#include<string.h>

int main()
{
    char str1[80];
    char *p1;
    printf("Enter a sentence : ");
    gets(str1);
    p1 = str1;

    int i;

    for(i = 0 ; *p1 != '\0' ; i++)
    {
        if(*p1 == ' ')
        {
           while(*(p1+1) == ' ')
           {
              strcpy(p1, (p1+1));
           }
           p1++;
        }        
        else
           p1++;
    }
    printf("Without space : %s", str1);

}