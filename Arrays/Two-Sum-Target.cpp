// Given an array of integers nums and an integer target.Return
// the indices(0 - indexed) of two elements in nums such that
// they add up to target.Each input will have exactly
// one solution, and the same element cannot be
// used twice.Return the answer in
// increasing order.

#include <iostream>
#include <vector>
        using namespace std;
int main()
{
    int n;
    cout << "Enter The Size of Array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter Your Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int targetVal;
    cout << "Enter Your Target Value: ";
    cin >> targetVal;
    int j;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == targetVal)
            {
                cout << "Your Target Sum Value Index Position is " << i << " "
                                                                           "and "
                     << j << endl;
                return 0;
            }
        }
    }
}