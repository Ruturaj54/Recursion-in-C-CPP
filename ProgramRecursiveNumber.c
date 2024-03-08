
#include<stdio.h>

void DisplayNumb()
{
    int iCnt = 1;

    while(iCnt <= 5)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}
int main()
{
    DisplayNumb();

    return 0;
}