#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Size of Array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter The Values Of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int num1 = 0;
    for (int i = 0; i < n; i++)
    {
        num1 = num1 ^ nums[i];
    }
    cout << "Single number is " << num1 << endl;
    return 0;
}
