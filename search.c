#include <stdio.h>
int main ()
{
    int a[20];
    int n;
    printf ("enter the elements of the array : ");
    scanf ("%d",&n);
    for (int i=0 ; i<=n-1 ; i++)
    {
        printf ("enter the %d elements of the array : ",i+1);
        scanf ("%d",&a[i]);
    }
    int e;
    int check = 0;
    printf ("enter the number to search : ");
    scanf ("%d",&e);
    for (int i=0 ; i<=n ; i++)
      {
        if (e==a[i])
        {
          check = 1;
          break;
        }
        if (check==0)
        {
          printf ("not found");
          break;
        }
        else 
        {
          printf ("%d found at index %d ",e,i+1);
          break;
        }
      }
    return 0;
}