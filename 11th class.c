#include<stdio.h>
void main()
{
   int sum=0,i;
   for(i=30;i<=120;i++)
   {
       if(i%3==0 && i%5==0)
       {
           sum=sum+i;
       }

   }
printf("sum=%d",sum);
}



