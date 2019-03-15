#include<stdio.h>
void main()
{
 int num,ch,i,n;
 printf("Enter Test Case: ");
 scanf("%d",&n);
 int T[n];
 for(i=0;i<n;i++)
{   printf("Enter Seat No.: ");
    scanf("%d",&T[i]);
} 
 for(i=0;i<n;i++)
 {
 ch=T[i]%12;
 switch(ch)
 {
  case 0:printf("%d WS",T[i]-11);
  break;
  case 1:printf("%d WS",T[i]+11);
  break;
  case 2:printf("%d MS",T[i]+9);
  break;
  case 3:printf("%d AS",T[i]+7);
  break;
  case 4:printf("%d AS",T[i]+5);
  break;
  case 5:printf("%d MS",T[i]+3);
  break;
  case 6:printf("%d WS",T[i]+1);
  break;
  case 7:printf("%d WS",T[i]-1);
  break;
  case 8:printf("%d MS",T[i]-3);
  break;
  case 9:printf("%d AS",T[i]-5);
  break;
  case 10:printf("%d AS",T[i]-7);
  break;
  case 11:printf("%d MS",T[i]-9);
 }
 printf("\n");
}
}

