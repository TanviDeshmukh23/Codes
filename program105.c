// Input : 7
// Output : A   1   B   2   C   3   D   4   E   5   F   6   G   7

// Input : 3
// Output : A   1   B   2   C   3

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    //      1                   2                3
    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t%d\t",ch,iCnt);      // 4
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}
