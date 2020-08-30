#include <iostream>
using namespace std;

int c[100];


void mergethesortedsubarrays(int *a, int l , int m , int r)
{
    int i = l , j = m+1 ;
    int k = l;    
    while(i<=m and j<=r)
    {
        if(a[i]<a[j])
            c[k++] = a[i++] ;
        
        else
            c[k++] = a[j++] ;
    }
    while(i<=m)
        c[k++] = a[i++];

    while(j<=r)
        c[k++] = a[j++];

    for(int i=l;i<=r;i++)
        a[i] = c[i];

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
