/*
5. Accept N numbers from user and display all such elements which are 
multiples of 11.
Input : N : 6
Elements :85 66 3 55 93 88
Output : 66 55 88
*/


#include<stdio.h>
#include<stdlib.h>
void Display(int Brr[],int iSize)
{ 
       int iCnt=0,i=0;
       
       for ( i = 0; i < iSize; i++)
       {
           if (Brr[i]%11==0)
           {
              printf("%d\t",Brr[i]);
           }
           
       }
        
}
int main()
{
     int *Arr=NULL;
     int iLength=0,iCnt=0,iRet=0;
    
     printf("Enter No. of elements:");
     scanf("%d",&iLength);
    Arr=(int*)malloc(sizeof(int)*iLength);

     printf("Enter numnbers:\n");
     for ( iCnt = 0; iCnt < iLength; iCnt++)
     {
         scanf("%d",&Arr[iCnt]);
     }
     
     Display(Arr,iLength);
     
     free(Arr);
    return 0;
}