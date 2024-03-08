
#include<stdio.h>

void Factors(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        Factors(iNo);
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