
#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        iNo--;
        Display(iNo);
        printf("%d\n",iNo);
    }
}

void DisplayX(int iNo)
{
    if(iNo >= 1)
    {
        Display(iNo - 1);
        printf("%d\n",iNo);
    }
}

int main()
{
    DisplayX(5);
    return 0;
}