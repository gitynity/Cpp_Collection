#include <iostream>
using namespace std;

void mergethesortedsubarrays(int *a, int l , int m , int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = a[i+l];

    for (int j = 0 j < n2; j++)
        right[j] = a[j+m+1];

    int i = 0, j = 0;
    int k = l;

    while (i < n1 and j < n2)
    {
        if (left[i] < right[j])
        {
            a[k++] = left[i++];
        }
        else if (left[i] > right[j])
        {
            a[k++] = right[j++];
        }
    }

    while (i < n1)
    {
        a[k++] = left[i++];
    }
    while (j < n2)
    {
        a[k++] = right[j++];
    }
}

void mergesort(int *a , int l , int r)
{
    if(r >  l)
    {
        int m = l + (r-l)/2;
        mergesort(a,0,m);
        mergesort(a,m+1,r);
        mergethesortedsubarrays(a,l,m,r); 
    }
}

int main()
{
    int arr[] = {2,7,4,1,5,3,9};
    mergesort(arr,0,6);   
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
}
