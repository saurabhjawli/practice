
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

char CheckVowel(char CValue)
{
    if(CValue == 'a'||CValue == 'e'||CValue =='i'||CValue =='o'||CValue =='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }


}

int main()
{
    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet  = CheckVowel (cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else 
    {
        printf("It is not Vowel");
    }

    return 0;

}