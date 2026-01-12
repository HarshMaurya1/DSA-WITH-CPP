#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Size Of Array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter The Elements Of Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int missingNum = 0;
    int actualSum = 0;
    int expectedSum = 0;
    for (int i = 0; i < n; i++)
    {
        actualSum += nums[i];
    }
    expectedSum = n * (n + 1) / 2;
    missingNum = expectedSum - actualSum;

    cout << "The Missing Number is: " << missingNum << endl;
}
