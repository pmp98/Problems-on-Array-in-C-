// 5. Accept N numbers from user and accept one another number as NO , return frequency of NO form it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],  int iSize,int iNo)    
{
    int i = 0, iCnt = 0;
    for(i = 0 ; i < iSize; i ++)
    {
            if(Arr[i] == iNo)
            {
                iCnt++;
            }
    }
    return iCnt;
}

int main()
{
    int iLength = 0, i = 0,iRet = 0,iValue=0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);
    printf("Enter Number to be searched\n");
    scanf("%d",&iValue);
    
    ptr = (int *)malloc(sizeof(int) * iLength);
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    iRet = Frequency(ptr,iLength,iValue);
    printf("Count is : %d\n",iRet);
    free(ptr);
    return 0;
}
