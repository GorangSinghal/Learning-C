#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[] = "It was raining heavy", str1[10], str2[10];
    char *t, *p, *news;

    printf("Original : %s\n", str);
    printf("Enter the word to be exchanged : ");
    gets(str1);
    printf("Enter the new word : ");
    gets(str2);

    if(strlen(str2)>strlen(str1))
       exit(0);

    p = strstr(str, str1);
    /*copy the remaining string*/
    news = p + strlen(str1);
    
    strcpy(t, news);
    /*Replace old string*/
    strcpy(p, str2);
    /*append the remaining part*/
    strcat(p, t);

    printf("Output : %s", str);
}