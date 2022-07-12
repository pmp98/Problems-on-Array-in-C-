/* 1. Accept N numbers from user and return frequency of even numbers. 
Input :  N :   6 
  Elements : 85 66 3 80 93 88  
Output : 3   */

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],  int iSize)
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iLength = 0, i = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    
    ptr = (int *)malloc(sizeof(int) * iLength);
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = CountEven(ptr,iLength);
    printf("Number of even elements are : %d\n",iRet);
    free(ptr);
    return 0;
}
