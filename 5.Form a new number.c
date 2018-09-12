int evenDigits(int n)
{
  int ans,k;
  if(n<10 && n>-10)
  {
    if(n%2==0 && n!=1)
      return n;
    else
      return 0;
  }
  
  else
  {
    k=n%10;
    ans = evenDigits(n/10);
    if(k%2==0 && k!=1)
      ans = ((ans*10)+k);
    return ans;
  }
}
