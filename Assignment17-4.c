//4. Accept N numbers from user and return frequency of 11 form it. 

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],  int iSize)    // number greater than 10
{
    int i = 0, iCnt = 0;
    for(i = 0 ; i < iSize; i ++)
    {
            if(Arr[i] == 11)
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
    if(ptr == NULL) 
     {
      printf("Unable to allocate memory");
         return -1;
           }
    printf("Enter elements\n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = Frequency(ptr,iLength);
    printf("Count is : %d\n",iRet);
    free(ptr);
    return 0;
}
