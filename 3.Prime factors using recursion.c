#include <stdio.h>
void factor(int n, int k)
{
  	if(n<=1)
    return;
  else if(n%k==0)
  {
      printf("%d\n",k);
      factor(n/k,k);
      return;
  }
  else
  {
      factor(n,k+1);
      return;
  }
}

int main()
{
   int no;
   scanf("%d",&no);
	factor(no,2);
   return 0;
}
