#include<stdio.h>
int main ()
{
   int n,k;
   int steak;

   scanf("%d %d",&n,&k);

   if(2*13%4 >= 1)
   {
       steak = ((2*n)/k);
   }
   else
   {
       steak = (2*n)/k;
   }

   {
       printf("%d",steak);
   }
    return 0;


}
