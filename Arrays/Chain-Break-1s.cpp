// Given a binary array nums, return the maximum number of
// consecutive 1s in the array.
// A binary array is an array that contains only 0s and 1s.

// Example 1

// Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]

// Output: 3

// Explanation:

// The maximum consecutive 1s are present from index 4 to index 6,
// amounting to 3 1s

// Example 2

// Input: nums = [0, 0, 0, 0, 0, 0, 0, 0]

// Output: 0

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cout << "Enter The Size Of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Your Elements only (o/1): " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Currentcount = 0;
    int maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            Currentcount++;
        }
        else
        {
            Currentcount = 0;
        }
        if (Currentcount > maxcount)
        {
            maxcount = Currentcount;
        }
    }

    cout << "Your Maximum Number Of (1s) is : " << maxcount << endl;
}
