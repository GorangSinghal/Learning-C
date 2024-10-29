#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

char *mo[12]= {
    "January", 
    "February", 
    "March",
    "April",
    "May",
    "June", 
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};

void display();

int main()
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ndays, ldays, tdays, tydays = 0, wday, i, y, m, d;

    printf("Enter the year and months(in number)\n");
    printf("Year : ");
    scanf("%d", &y);   
    printf("Month : ");
    scanf("%d", &m);

    if((y%100 == 0 && y%400 == 0)||(y%4 == 0 && y%100 != 0))
    days[1] = 29;

    y = y - 1900;
    ndays = (y-1)*365;
    ldays = (y-1)/4 - (y-1)/100 + (y-1)/400;
    tdays = ndays + ldays;
    if(y > 100)
    tdays = tdays +1;
    d = days[m-1];

    for(i = 0 ; i < m-1 ; i++)
    {
        tydays = tydays + days[i];
    }
    tdays = tdays + tydays ;
    wday = tdays%7;
    display(y, m, d, wday);
}

void display(int y, int m, int d, int wd)
{
    int i, c = 0;
    printf("\t%s %d\n", mo[m-1], (y+1900));
    printf("Mon Tue Wed Thu Fri Sat Sun\n");
    for(i = 0 ; i <= wd ; i++)
    {
       printf("    ");
       c++;
    }
    for(i = 1 ; i <= d ; i++)
    {
        if(c%7 == 0)
        printf("\n");
        if(i < 10)
        printf("%d   ", i);
        else
        printf("%d  ", i);
        c++;
    }
}