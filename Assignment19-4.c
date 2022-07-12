/*
4. Accept N numbers from user and display all such numbers which contains 
3 digits in it.
Input : N : 6
Elements :8225 665 3 76 953 858
Output : 665 953 858
*/


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i=0;
    for(int i = 0; i<iLength; i++)
    {
        int iDigit = 0, iTemp = Arr[i], iCnt = 0;
        while(iTemp>0)
        {
            iDigit = iTemp%10;
            iCnt++;
            iTemp = iTemp/10;
        }
        if(iCnt == 3)
        {
            printf("%d\t", Arr[i]);
        }
        
    }
    printf("\n");
}

int main()
{
    int *p = NULL;
    int  iSize = 0;

    printf("Enter no. of elements: \n");
    scanf("%d", &iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    printf("Enter elements: \n");

    for(int i = 0; i<iSize; i++)
    {
        scanf("%d", &p[i]);
    }

    Display(p, iSize);

    free(p);

    return 0;
}