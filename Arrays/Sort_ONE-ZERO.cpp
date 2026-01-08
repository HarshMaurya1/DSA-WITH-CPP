#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Size of Array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter The Elements Only(0/1):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    cout << "sorted elements: \n";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
