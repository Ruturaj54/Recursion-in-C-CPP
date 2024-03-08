
#include<stdio.h>

int SumFactorsR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
           iSum = iSum + iCnt;
        }
        iCnt++;
        SumFactorsR(iNo);
    }
    return iSum;
    
}

int SumFactorsI(int iNo)
{
    int iCnt = 1;
    int iSum = 0;

    while(iCnt != (iNo/2) + 1)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }
    return iSum;

}

    
int main()
{
    int value = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&value);
   iRet = SumFactorsR(value);
   printf("Addition of factors is : %d\n",iRet);

    return 0;
}