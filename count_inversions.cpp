//https://www.geeksforgeeks.org/counting-inversions/

#include <bits/stdc++.h>
using namespace std;

int inv_count = 0;

void merge_count(int *a, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = a[i+l];

    for (int j = 0; j < n2; j++)
        right[j] = a[j+m+1];

    int i = 0, j = 0, k = l;

    while (i < n1 and j < n2)
    {
        if (left[i] < right[j])
        {
            a[k++] = left[i++];
        }
        else if (left[i] > right[j])
        {
            a[k++] = right[j++];
            inv_count += n1 - i;
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

void count_inverse(int *a, int l, int r)
{
    if (r > l)
    {
        int m = l + (r - l) / 2;
        count_inverse(a, l, m);
        count_inverse(a, m + 1, r);
        merge_count(a, l, m, r);
    }
}

int main()
{
    int a[] = {2, 5, 4, 1, 3};
    count_inverse(a, 0, 4);
    cout << inv_count;
}
