#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int a[100];
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter number: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp= a[i];
        j=i-1;

        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("Sorted list:\n");
    for (i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
