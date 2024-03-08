

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

int SumX(int Arr[],int iSize)
{
    int i = 0;
    int iSum = 0;
    while(i < 5)
    {
        iSum = iSum + Arr[i];
        i++;
    }
    return iSum;
}

int SumR(int Arr[],int iSize)
{
    static int  i = 0;
    static int iSum = 0;

    if(i < 5)
    {

        iSum = iSum + Arr[i];
        i++;
        SumR(Arr,iSize);
    }
    return iSum;
}

int main()
{
    int Arr[5] = {10,20,30,40,50};
    int iRet = 0;

    iRet = SumX(Arr,5);

    printf("The sum of all Array elements is : %d\n",iRet);

    iRet = SumR(Arr,5);

    printf("The sum of all Array elements is : %d\n",iRet);

    return 0;
}