#include<stdio.h>
#include<math.h>
int main() 
{
    int n,x;
    printf("enter no of elements: ");
    scanf("%d", &n);
    int a[n],f; 
    for(int i=0;i<n;i++)
    {
        printf("enter element: ");
        {
        scanf("%d",&a[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        a[i]= a[i] +5;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}