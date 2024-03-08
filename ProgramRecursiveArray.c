

#include<stdio.h>

void Display(int Arr[],int iSize)
{
    for(int i = 0;i < 5;i++)
    {
        printf("%d\t",Arr[i]);
    }
}

void DisplayX(int Arr[],int iSize)
{
    int i = 0;
    while(i < 5)
    {
        printf("%d\t",Arr[i]);
        i++;
    }
}

void DisplayR(int Arr[],int iSize)
{
    static int  i = 0;
    if(i < 5)
    {

        printf("%d\t",Arr[i]);
        i++;
        DisplayR(Arr,iSize);
    }
    
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    DisplayR(Arr,5);
    return 0;
}