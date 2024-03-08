

#include<stdio.h>

int SumY(int Arr[],int iSize)
{
    int iSum = 0;
    for(int i = 0;i < 5;i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int EvenCntX(int Arr[],int iSize)
{
    int i = 0;
    int iCnt = 0;
    while(i < 5)
    {
        if(Arr[i] % 2 == 0)
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
}

int EvenCntR(int Arr[],int iSize)
{
    static int  i = 0;
    static int iCnt = 0;

    if(i < 5)
    {

        if(Arr[i] % 2 == 0)
        {
            iCnt++;
        }
        i++;
        EvenCntR(Arr,iSize);
    }
    return iCnt;
}

int main()
{
    int Arr[5] = {11,20,31,40,50};
    int iRet = 0;

    iRet = EvenCntR(Arr,5);

    printf("The Number of Even Elements are : %d\n",iRet);

   

    return 0;
}