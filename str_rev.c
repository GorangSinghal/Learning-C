#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char *str[5];

void read();
void display();
void xstrrev(char *ss);

int main()
{
    char *t, *s;
    int i, j;

    printf("Enter 5 sentences : \n");
    read();
    printf("\n");
    printf("The 5 sentences are : \n");
    display();

    for(i = 0 ; i < 5 ; i++)
    {
        xstrrev(str[i]);
    }

    printf("\n");
    printf("Sentences after reversing : \n");
    display();
}

void read()
{
    char *p, n[20];
    int i, len;

    for(i = 0 ; i < 5 ; i++)
    {
        gets(n);
        len = strlen(n);
        p = (char*)(malloc)(len+1);
        strcpy(p, n);
        str[i] = p;
    }
}

void display()
{
    int i;
    for(i = 0 ; i < 5 ; i++)
    {
        puts(str[i]);
    }
}
void xstrrev(char *ss)
{
    int i =0 , len;
    char *tt, temp;

    len = strlen(ss);
    tt = ss + len-1 ;
    for(i = 0 ; i < len/2 ; i++)
    {
        temp = *ss;
        *ss = *tt;
        *tt = temp;
        tt--;
        ss++;
    }
}