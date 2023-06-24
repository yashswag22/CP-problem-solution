// C++ program to sort Array
// in descending order
// using sort() in STL
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Get the array
    int arr[] = { 1, 45, 54, 71, 76, 12 };
 
    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;
 
    // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    // Sort the array in descending order
    sort(arr, arr + n, greater<int>());
 
    // Print the sorted array
    cout << "\nDescending Sorted Array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}