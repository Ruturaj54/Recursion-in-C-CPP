
#include<stdio.h>

int DisplayDigitI(int iNo)
{
    int idigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        idigit = iNo % 10;
        iSum = iSum + idigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int DisplayDigitR(int iNo)
{
    int idigit = 0;
    static int iSum = 0;
    if(iNo != 0)
    {
        idigit = iNo % 10;
        iSum = iSum + idigit;
        iNo = iNo / 10;
        DisplayDigitR(iNo);
    }
    return iSum;
}
    
int main()
{
    int value = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&value);

    iRet = DisplayDigitR(value);
    printf("Sum of digits is : %d\n",iRet);
    return 0;
}