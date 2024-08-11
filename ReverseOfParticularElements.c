#include <stdio.h>
void reverse(int a[],int si,int ei)
{
    for (int i=si ,j=ei ; i<j ; i++,j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
        return ;
}
int main ()
{
    int a[8] = {1,2,3,4,5,6,7,8};
    int si,ei;
    printf ("enter the starting index : ");
    scanf ("%d",&si);
    printf ("enter the ending index : ");
    scanf ("%d",&ei);
    reverse (a,si,ei);
    for (int i=0 ; i<=7 ; i++)
    {
        printf ("%d ",a[i]);
    }
    return 0;
}