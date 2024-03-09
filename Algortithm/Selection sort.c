#include<stdio.h>
main()
{
    int a[]={100,2,70,13,21};
    int n=5;
    int i,j,min,temp;

    for(i=0; i<n-1;i++) //for iteration. Here n-1, cause for 5 value we need to do 4 iteration
    {
        min =i;

        for(j=i+1; j<n; j++) //for comparison with each element
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
    }


     for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}


/*
#include<stdio.h>
void selection_sort(int a[], int n)
{
    int i,j,min,temp;

    for(i=0; i<n-1;i++) //for iteration. Here n-1, cause for 5 value we need to do 4 iterration
    {
        min =i;

        for(j=i+1; j<n; j++) //for comparison
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }

        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }


     for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}


main()
{
    int a[]={3,5,21,13,2};
    int n=5;
    selection_sort(a,n);

}
*/
