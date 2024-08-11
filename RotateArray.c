#include <stdio.h>
void reverse(int a[],i,j)
{
    for (int i=0,j=n-1 ; i<j ; i++,j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return;

}
int main ()
{
    int a[20];
    int n;
    printf ("enter the number of elements : ");
    scanf ("%d",&n);
    for(int i=0 ; i<n-1 ; i++)
    {
        printf ("enter the %d elments of the array : ",i+1);
        scanf ("%d",&a[i]);
        reverse(a,0,n-1);
        // printf ("%d ",a[i]);
    }
    return 0;
}