
#include<stdio.h>

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
    
    
    return 0;
}