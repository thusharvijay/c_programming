#include <stdio.h>
int checkprime(int n);
int checkarmstrong(int num);
void main()
{
  int n1,flag;
  printf("Enter a number : ");
  scanf("%d",&n1);
  flag=checkprime(n1);
  if (flag==1)
    printf("%d is a prime number\n",n1);
  else
    printf("Not a prime number\n");
  flag=checkarmstrong(n1);
  if (flag==1)
    printf("%d is a armstrong number\n",n1);
  else
    printf("Not a armstrong number\n");
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

int checkarmstrong(int num)
{
  int orgnum,remainder,n,flag,result;
  orgnum=num;
  while (orgnum!=0)
    {
      num/=10;
      n++;
    }
  orgnum=num;
  while (orgnum!=0)
    {
      remainder=num%10;
      result+=remainder^n;
      orgnum/=10;
    }
  printf("%d",result);
  if (result==num)
  {flag=1;}
  else
  {flag=0;}
  return flag;
}