#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter Your Value: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " Sorted Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 0)
    {
        cout << "0";
        return 0;
    }
    int x = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[x] = arr[i];
            x++;
        }
    }
    cout << endl
         << x << " is Unique Elements " << endl;
    cout << "resulting Array: ";
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
