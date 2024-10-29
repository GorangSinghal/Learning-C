#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *str[5];
void read();

int main()
{
    char str1[10], str2[10] ;
    int i;
    char *news, *p, *t;

    printf("Enter 6 sentences : \n");
    read();

    puts("Entered strings are : \n");
    for(i = 0 ; i < 5 ; i++)
       puts(str[i]);

    printf("Enter the word to be replaced : ");
    gets(str1);
    printf("Enter the new word : ");
    gets(str2);

    if(strlen(str2)> strlen(str1))
    {
        printf("Enter a string with maximum length of %d", strlen(str1));
        exit(0);
    }

    for(i = 0 ; i < 5 ; i++)
    {
        p = strstr(str[i], str1);
        if(p)
        {
            news = p + strlen(str1);
            strcpy(t, news);
            strcpy(p, str2);
            strcat(p, t);
        }
    }

    puts("Altered strings are : \n");
    for(i = 0 ; i < 5 ; i++)
       puts(str[i]);
}

void read()
{
    int i, len;
    char n[50], *p;
    for( i = 0 ; i < 5 ; i++)
    {
        gets(n);
        len = strlen(n);
        p = (char*)malloc(len+1);
        strcpy(p, n);
        str[i] = p;
    }
}