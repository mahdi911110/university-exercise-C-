#include<iostream>
int binsearch(int [],int,int,int);
using namespace std;
// Binary Search with cin
int main() {
    int y;
    cout << "Enter array lenght: ";
    cin >> y;
    int x;
    cout << "Enter key for search: ";
    cin >> x;
    int arr[y];
    cout << "Enter array numbers: ";
    for (int i = 0; i < y; i++)
        cin >> arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binsearch(arr, 0, n - 1, x);
    if (result == -1)
        cout << "number is not in array";

    else
        cout << "number is in column " << result;//
    
    return 0;
}
int binsearch(int arr[], int l, int r, int x){
    if (r >= l){
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binsearch(arr, l, mid - 1, x);

        return binsearch(arr, mid + 1, r, x);
    }
    return -1;
}