#include <stdio.h>
void mergeSort(int A[], int low, int high){
    int mid;
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}


void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[50];
    i = low;
    j = mid + 1;q3
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    //For extra Element, if exists
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}



int main()
{

    int A[] = {10, 2, 14, 17, 4, 12, 6,10,5};
    int n = 9;
    mergeSort(A, 0, 8);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
