#include <stdio.h>
int checkprime(int n);
void main()
{
  int n1,n2,flag,i;
  printf("Enter two numbers : ");
  scanf("%d %d",&n1,&n2);
  for (i=n1+1;i<n2;i++)
    {
      flag=checkprime(i);
      if (flag==1)
        printf("%d is a prime number\n",i);
    }
}

int checkprime(int n)
{
  int flag=1,j;
  for(j=2;j<=(n/2);j++)
    {
    if (n%j==0){
      flag=0;
      break;
    }
    }
return flag;
}