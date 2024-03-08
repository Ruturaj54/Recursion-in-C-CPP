
#include<stdio.h>

void Factors(int iNo)
{
    int iCnt = 1;

    while(iCnt != (iNo/2) + 1)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
    }
}
int main()
{
    int value = 0;
    printf("Enter the number : \n");
    scanf("%d",&value);
   Factors(value);

    return 0;
}