/* 5. Accept N numbers from user and display summation of digits of each 
number.
Input : N : 6
Elements :8225 665 3 76 953 858
Output : 17 17 3 13 17 21
*/


#include<stdio.h>
#include<stdlib.h>
int Display(int brr[],int isize)
{
   int i=0;
   printf("Summation of digit is\n");
   for ( i = 0; i < isize; i++)
   {
     int temp=brr[i],idigit=0,sum=0,add=0;
     while (temp>0)
     {

       idigit=temp%10;
       sum=sum+idigit;
       temp=temp/10;
     }
     printf("%d\n",sum);
   }
   
}
int main()
{
  int *Arr=NULL;

  int ilength=0 , i=0;

  printf("Array length\n");
  scanf("%d",&ilength);

  Arr=(int *)malloc(sizeof(int)*ilength);
  
  printf("Enter elements in array\n");
  for ( i = 0; i < ilength; i++)
  {
    scanf("%d",&Arr[i]);
  }

   Display(Arr,ilength);
    free(Arr);
    return 0;
}