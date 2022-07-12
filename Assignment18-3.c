/*

3. Accept N numbers from user and accept one another number as NO , 
return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 3

*/
#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[], int iSize,int iNo)
{
    int i = 0;
    
    for(i = iSize; i >=0; i--)
    {
        if(Arr[i] == iNo)   
        {   break;  }
    }
    if(i == iSize)
    {return -1;  }
    else
    {   return i;    }
}
int main()
{
    int iLength = 0, i = 0, iValue = 0,iRet = 0;
    int *ptr = NULL;
    
    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    printf("Enter the element to seach\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int) * iLength);
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    iRet = LastOccurance(ptr,iLength,iValue);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Number is there at index : %d\n",iRet);
    }
    free(ptr);
    return 0;
}
