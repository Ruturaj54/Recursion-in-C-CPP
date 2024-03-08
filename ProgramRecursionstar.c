
#include<stdio.h>

void DisplayStarI()
{
    int iCnt = 1;

    while(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayStarR()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        DisplayStarR();
    }

}

int main()
{
    DisplayStarR();
    //DisplayStarI();
    return 0;
}