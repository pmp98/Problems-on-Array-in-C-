/*
3. Accept N numbers from user check whether that numbers contains 11 in 
it or not.
Input : N : 6
Elements :85 66 11 80 93 88
Output : 11 is present
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool check(int Brr[],int iSize)
{ 
     int i=0,iCnt=0;
     for ( iCnt = 0; iCnt < iSize; iCnt++)
     {
       if (Brr[i]==11)
       {
         return true;
       }
       else
       {
         return false;
       }
     }
     
 }
 
int main()
{
  int *Arr=NULL;
  int iLength=0,iCnt=0;
  bool bRet=0;
  printf("Enter no. of elements:");
  scanf("%d",&iLength);

  Arr=(int*)malloc(sizeof(int)*iLength);
   printf("Enter no\n");
   for ( iCnt = 0; iCnt <iLength ; iCnt++)
   {
      scanf("%d",&Arr[iCnt]);
   }

   bRet=check(Arr,iLength);
   if (bRet==true)
   {
      printf("11 is Present:");
   }
   else
   {
     printf("11 is not Present:");
   }
  
   free(Arr);
    return 0;
}