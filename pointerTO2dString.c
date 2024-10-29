/*EXCHANGE NAMES AND SURNAME*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    //INPUT PROCESS
    char *name[2] ;
    int i, len;
    char n[10];
    char *p;
     
    for(i = 0 ; i < 2 ; i++)
    {
        printf("Enter a name : ");
        scanf("%s", n);
        len = strlen(n);
        p = (char*)malloc(len+1);
        strcpy(p, n);
        name[i] = p;
    }

    //Exchange process
    printf("Original : %s %s\n", name[0], name[1]);

    char *temp;
    temp = name[0];
    name[0] = name[1];
    name[1] = temp;
    
    printf("NEW : %s %s\n", name[0], name[1]);
}