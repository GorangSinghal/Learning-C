#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *names[5];

void read();
void display();

int main()
{
     char *t;
     int i, j;

     printf("Enter 5 names : \n");
     read();
     printf("\n");
     printf("The 5 names are : \n");
     display();
     for(i = 0 ; i < 4 ; i++)
     {
        for(j = i+1 ; j < 5 ; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                t = names[i];
                names[i] = names[j];
                names[j] = t;
            }
        }
     }
     printf("\n");
     printf("After sorting : \n");
     display();
}

void read()
{
    char n[10], *p;
    int i, len;

    for(i = 0 ; i < 5 ; i++)
    {
        gets(n);
        len = strlen(n);
        p = (char*)(malloc)(len + 1);
        strcpy(p, n);
        names[i] = p;
    }
}

void display()
{
    int i;
    for(i = 0 ; i < 5 ; i++)
    {
        puts(names[i]);
    }
}