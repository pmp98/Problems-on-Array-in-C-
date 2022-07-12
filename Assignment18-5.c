 /* 5. Accept N numbers from user and return product of all odd elements. 
  Input :  N :   6    
  Elements : 15 66 3 70 10 88  
  Output : 45 

*/

#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[],  int iSize)
{
    int i = 0, iMult = 1;
    if(iMult<= 0)  // Updator
    {
        iMult = 0;
    }
    for(i = 0 ; i < iSize; i ++)
    {
        if((Arr[i] % 2) != 0)
        {
            iMult = iMult * Arr[i];
        }
    }
    return iMult;
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
    iRet = SumOdd(ptr,iLength);
    
    printf("Product is : %d\n",iRet);
    free(ptr);
    return 0;
}
