#include <stdio.h>
int main ()
{
    int a[6] = {1,2,3,4,5,6};
    for (int i=5 ; i>=0 ; i--)
    {
        printf ("%d ",a[i]);
    }
    return 0;
}