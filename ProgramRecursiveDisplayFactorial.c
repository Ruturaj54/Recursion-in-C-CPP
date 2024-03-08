
#include<stdio.h>

int DisplayFact(int iNo)
{
    int iCnt = 1;
    int iFact = 1;

    while(iCnt <= iNo)
    {
       iFact = iFact * iCnt;
       iCnt++;
        
    }

    return iFact;
}

int DisplayFactR(int iNo)
{
    static int iCnt = 1;
    static int iFact = 1;

    if(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        DisplayFactR(iNo);
    }
    return iFact;
}
    
int main()
{
    int value = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&value);

    iRet = DisplayFactR(value);
    printf("Factorial of %d is : %d\n",value,iRet);
    return 0;
}