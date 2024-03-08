
#include<stdio.h>

void DisplayDigitI(int iNo)
{
    int idigit = 0;
    while(iNo != 0)
    {
        idigit = iNo % 10;
        printf("%d\t",idigit);
        iNo = iNo / 10;
    }
}

void DisplayDigitR(int iNo)
{
    int idigit = 0;

    if(iNo != 0)
    {
        idigit = iNo % 10;
        iNo = iNo / 10;
        DisplayDigitR(iNo);
        printf("%d\t",idigit); //Power of recursion
    }
}
    
int main()
{
    int value = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&value);

    DisplayDigitR(value);
    return 0;
}