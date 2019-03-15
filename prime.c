#include<stdio.h>
void main()
{
int num,i,j,m;
 printf("Enter a no.");
 scanf("%d",&num);
 for(i=2;i<=num;i++)
 { 
    m=0; 
   for(j=2;j<i;j++)
        {if(i%j==0)
          m++;
         }
         if(m<1)
         printf("%d",i);
        
    }
} 
