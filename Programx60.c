//DRY RUN purpose..........

#include<stdio.h>

int SumDigits(int iNo)
{
  int iSum = 0;
  int iDigit = 0;

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    iNo = iNo / 10;
    iSum = iSum + iDigit;
  }
  return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Sum of Digits in Number %d is :%d\n",iValue,iRet);

    return 0;
}