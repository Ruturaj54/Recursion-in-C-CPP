#include<stdio.h>


int CapitalCnt(char *Str)
{
    int iCnt = 0;
    while(*Str != '\0')
    {
        if(*Str >= 'A' && *Str <= 'Z')
        {
            iCnt++;
        }
        
        Str++;
    }
    return iCnt;
}

int CapitalCntR(char *Str)
{
    static int iCnt = 0;

    if(*Str != '\0')
    {
        if(*Str >= 'A' && *Str <= 'Z')
        {
            iCnt++;
        }
        
        Str++;
        CapitalCntR(Str);
    }
    return iCnt;
}

int StrlenR(char *Str)
{
    static int iCnt = 0;

    if(*Str != '\0')
    {
        iCnt++;
        Str++;
        StrlenR(Str);
    }
    
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    iRet = CapitalCntR(Arr);

    printf("Capital letters are is : %d\n",iRet);


    return 0;
}