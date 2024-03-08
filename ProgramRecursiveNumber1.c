
#include<stdio.h>

void DisplayNumbI()
{
    int iCnt = 1;

    while(iCnt <= 5)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

void DisplayNumbR()
{
    static int iCNt = 1;

    if(iCNt <= 5)
    {
        printf("%d\n",iCNt);
        iCNt++;
        DisplayNumbR();
    }
}
int main()
{
    //DisplayNumbI();
    DisplayNumbR();

    return 0;
}