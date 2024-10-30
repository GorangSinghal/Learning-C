#include<stdio.h>

void rFibo();
int main()
{
    int no, old = 0, current =1;

    printf("Fibonacci series : %d, ", current);
    rFibo(old, current);
}

void rFibo(int old, int curr)
{
    int new;
    static int terms = 2;
    if(terms <= 11)
    {
        new = old + curr;
        printf("%d , ", new);
        terms++;
        rFibo(curr, new);
    }
}