#include<stdio.h>
void rprime();
int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d", &no);

    printf("Prime factors of %d are : ", no);
    rprime(no);
}
void rprime(int n)
{
    static int i = 2;

    if(i <= n)
    {
        if(n%i == 0)
        {
            printf("%d * ", i);
            n = n/i;
        }
        else 
            i++;
        rprime(n);
    }
}