#include<stdio.h>
void rbin(int );

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    rbin(num);
}

void rbin(int n)
{
    int r;
    if(n == 0)
    printf("It's binary equivalent : ");
    else
    {
        r = n%2;
        rbin(n/2);
        printf("%d", r);
    }
}