#include <stdio.h>
#include <math.h>

int main() 
{
    int n,x;
    printf("enter no of elements: ");
    scanf("%d", &n);
    int a[n],f;
    for(int i=0;i<n;i++){
        printf("enter element: ");
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    printf("sum of all marks of array is: ");
    printf("%d", sum);
}