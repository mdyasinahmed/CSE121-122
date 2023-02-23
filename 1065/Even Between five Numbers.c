#include <stdio.h>

int main()
{
    int n=5, i, count=0;
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]%2 == 0)
        {
            count++;
        }
    }
    printf("%d valores pares\n", count);
}