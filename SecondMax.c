#include <stdio.h>
#include <limits.h>
int main()
{
  int a[5] = {1,2,3,3,2};
  int max = INT_MIN;
  int smax = INT_MIN;
  for (int i=0 ; i<=4 ; i++)
    {
      if (max<a[i])
      {
        max = smax;
        max = a[i];
      }
      else if (smax<a[i] && max!=a[i])
        smax = a[i];
    }
  printf ("second max = %d",smax);
  return 0;
}