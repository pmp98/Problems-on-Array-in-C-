/*

4. Accept N numbers from user and accept Range, Display all elements from 
that range
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88

*/
#include<stdio.h>
#include<stdlib.h>

int CountRange(int Arr[],  int iSize,int iStart,int iEnd)    
{
    int i = 0, iCnt = 0;
    for(i = 0 ; i < iSize; i ++)
    {
            if((Arr[i] > iStart) && (Arr[i] < iEnd))
            {
                printf("%d\t",Arr[i]);
                
            }
    }
  
}

int main()
{
    int iLength = 0, i = 0,iRet = 0,start=0,end=0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    printf("Enter start point \n");
    scanf("%d",&start);

    printf("Enter last point \n");
    scanf("%d",&end);
    
    ptr = (int *)malloc(sizeof(int) * iLength);
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = CountRange(ptr,iLength,start,end);
    
    free(ptr);
    return 0;
}
