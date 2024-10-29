#include<stdio.h>
#include<string.h>

#define FOUND 1
#define NOTFOUND 0

int main()
{
    int i, flag, a;
    char names[6][10] ;
    printf("Enter 6 names : \n");
    for(i = 0 ; i < 6 ; i++)
    {
        scanf("%s", names[i]);
    }

    printf("Allowed people are : \n");
    for(i = 0 ; i < 6 ; i++)
    {
        printf("%s\n", names[i]);
    }

    char yourname[10];
    printf("Enter your name : ");
    scanf("%s", yourname);

    flag = NOTFOUND;
    for(i = 0 ; i < 6 ; i++)
    {
        if(strcmp(yourname, names[i]) == 0)
        {
            printf("Welcome, you are family member");
            flag = FOUND;
            break;
        }
    }

    if(flag == NOTFOUND)
    {
        printf("You are an Outsider");
    }
}