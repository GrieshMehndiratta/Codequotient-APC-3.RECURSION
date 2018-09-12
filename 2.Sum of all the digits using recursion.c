int sumOfDigits(int n)
{
  int r,ans;
  if(n<10 && n>-10)
  {
    return n;
  }
  else
  {
    r=n%10;
    ans = sumOfDigits(n/10);
    ans = ans+r;
    return ans;
  }
  
}