#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The sige of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int biggest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > biggest)
        {
            biggest = arr[i];
        }
    }
    cout << biggest;
}