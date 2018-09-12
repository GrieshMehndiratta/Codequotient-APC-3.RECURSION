int power(int base, int exp)
{
  int k;
  if(exp==0)
    return 1;
  else if(exp==1)
    return base;
  else
  {
    k=power(base,exp-1);
    base=base*k;
    return base;
  }
}