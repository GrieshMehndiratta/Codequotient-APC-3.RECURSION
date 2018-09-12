int factorial(int n)
{
  int ans=1;
  if(n==1||n==0)
    return 1;
  else
  {
    ans= factorial(n-1);
    ans=ans*n;
    return ans;
  }
}