#include<stdio.h>
#include<math.h>
int rbin(int );

int main()
{
    int num, bin;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    bin = rbin(num);
    printf("It's binary equivalent : %d", bin);
}

int rbin(int n)
{
    int r, b;
    if(n == 0)
    return 0;
    else
    {
        r = n%2;
        b = rbin(n/2)*10 + r;
    }
    return b;
}