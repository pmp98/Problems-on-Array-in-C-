/*
2. Accept N numbers from user and return difference between frequency of 
even number and odd numbers.
Input : N : 7
Elements :85 66 3 80 93 88 90
Output : 1 (4 -3)
*/
#include<stdio.h>
#include<stdlib.h>
int Difference(int Brr[],int iSize)
{ 
     int iCnt=0,iEven=0,iOdd=0,iDiff=0;

  for (iCnt=0;iCnt<iSize;iCnt++)
 {
   if ((Brr[iCnt]%2)==0)
   {
    iEven++;
   }
   else if ((Brr[iCnt]%2)!=0)
   {
    iOdd++;
   }
 }
 
 return iDiff=iEven-iOdd;  
}
int main()
{
  int *Arr=NULL;
  int iLength=0,iCnt=0,iRet=0;
  printf("Enter no. of elements:");
  scanf("%d",&iLength);

  Arr=(int*)malloc(sizeof(int)*iLength);
   printf("Enter no\n");
   for ( iCnt = 0; iCnt <iLength ; iCnt++)
   {
      scanf("%d",&Arr[iCnt]);
   }

   iRet=Difference(Arr,iLength);
   printf("Difference is : %d",iRet);
   free(Arr);
    return 0;
}