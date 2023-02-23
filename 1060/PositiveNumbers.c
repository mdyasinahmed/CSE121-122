#include <stdio.h>

int main()
{
    int n=6, i, count=0;
    double arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%lf", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n", count);
}