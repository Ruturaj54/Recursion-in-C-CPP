
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

void DisplayNumbR(int iNo)
{
    static int iCNt = 1;

    if(iCNt <= iNo)
    {
        printf("%d\n",iCNt);
        iCNt++;
        DisplayNumbR(iNo);
    }
}
int main()
{
    //DisplayNumbI();
    DisplayNumbR(4);

    return 0;
}