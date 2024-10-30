#include<stdio.h>
int main()
{
    int i = 2, no;
    printf("Enter a number : ");
    scanf("%d", &no);

    printf("Prime factors of %d are : ", no);
    while(i<=no)
    {
        if(no%i == 0)
        {
            printf("%d * ", i);
            no = no/i;
        }
        else
        i++;
    }
}