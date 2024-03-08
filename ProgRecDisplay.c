
#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\n",iNo);
        iNo--;
        Display(iNo);
    }
}

int main()
{
    Display(5);
    return 0;
}