#include <iostream>
using namespace std;
int BinarySearch(int a[], int key, int l, int r)
{
    int mid = (l + r) / 2;
    if (key == a[mid])
        return mid;
    else if (key < a[mid])
        return BinarySearch(a, key, l, mid - 1);
    else
        return BinarySearch(a, key, mid + 1, r);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 8, 7};
    cout<<"search index: ";
    cout<<BinarySearch(a,4,0,7);
    return 0 ;
}