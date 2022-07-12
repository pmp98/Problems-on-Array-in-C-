/*1. Accept N numbers from user and accept one another number as NO,check whether NO is present or not.
 
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE

*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize,int iNo)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iLength = 0, i = 0,iValue=0;
    int *ptr = NULL;
    bool bRet = false;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);

     printf("Enter number \n");
    scanf("%d",&iValue);
    
    ptr = (int *)malloc(sizeof(int) * iLength);
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    bRet = CheckNumber(ptr,iLength,iValue);
    if(bRet == true)
    {
        printf("Number is there\n");
    }
    else
    {
        printf("Number is not there\n");
    }
    free(ptr);
    return 0;
}
