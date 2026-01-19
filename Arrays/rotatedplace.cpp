#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Size Of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter Your Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[a] = nums[i];
            a++;
        }
    }
    for (int i = a; i < n; i++)
    {
        nums[i] = 0;
    }
    cout << "Result Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
        }
    return 0;
}  

