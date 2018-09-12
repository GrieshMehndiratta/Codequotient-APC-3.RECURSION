int decimalToBinary(int n)
{
   int k,ans;
  if(n<2 && n>-2)
  {
    return n;
  }
  else
  {
    k=n%2;
    ans = decimalToBinary(n/2);
    ans = ans*10 + k;
    return ans;
  }
}