#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[100], arr1[100];
    cout << "Enter The Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter The Value of (K) to rotate array: ";
    cin >> k;
    k = k % n;
    int a = 0;

    for (int i = k; i < n; i++)
    {
        arr1[a++] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr1[a++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }
    cout << "Array after Rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}