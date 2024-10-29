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
        if(*p1 == 'a' || *p1 == 'e' || *p1 == 'i' || *p1 == 'o' || *p1 == 'u')
            strcpy(p1, (p1+1));
        else if(*p1 == 'A' || *p1 == 'E' || *p1 == 'I' || *p1 == 'O' || *p1 == 'U')
            strcpy(p1, (p1+1));
        else
            p1++;
    }
    printf("Without vowel : %s", str1);
}