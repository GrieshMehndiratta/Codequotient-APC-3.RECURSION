int gcd(int i, int j)
{
  if(i>=j)
  {
    if(j==0)
      return i;
    else
      return gcd(j,i%j);
  }
  else
  {
    if(i==0)
      return j;
    else
      return gcd(i,j%i);
  }
}