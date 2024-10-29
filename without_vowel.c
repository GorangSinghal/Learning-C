#include<stdio.h>
#include<string.h>

int main()
{
    char str1[80], str2[80];
    char *p1, *p2;
    printf("Enter a sentence : ");
    gets(str1);
    p1 = str1;
    p2 = str2;

    int i, len = strlen(str1);
    for(i = 0 ; i < len ; i++)
    {
        if(*p1 == 'a' || *p1 == 'e' || *p1 == 'i' || *p1 == 'o' || *p1 == 'u')
            p1++;
        else if(*p1 == 'A' || *p1 == 'E' || *p1 == 'I' || *p1 == 'O' || *p1 == 'U')
            p1++;
        else
            *p2++ = *p1++; 
    }
    *p2 = '\0';
    printf("Without vowel : %s", str2);
}