#include <iostream>
#include <vector>c
using namespace std;
int main()
{
    int n;
    cout << "Enter Size Of (1) Array: ";
    cin >> n;

    vector<int> num1(n);
    cout << "Enter Your Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num1[i];
    }
    int k;
    cout << "Enter Size Of (2) Array: ";
    cin >> k;
    vector<int> num2(k);
    cout << "Enter Your Elements: " << endl;
    for (int i = 0; i < k; i++)
    {
        cin >> num2[i];
    }
    vector<int> Finalpush;
    int i = 0, j = 0;
    while (i < n && j < k)
    {
        if (num1[i] < num2[j])
        {
            Finalpush.push_back(num1[i]);
            i++;
        }
        else if (num1[i] > num2[j])
        {
            Finalpush.push_back(num2[j]);
            j++;
        }
        else
        {
            Finalpush.push_back(num1[i]);
            i++;
            j++;
        }
    }
    while (i < n)
    {
        Finalpush.push_back(num1[i]);
        i++;
    }
    while (j < k)
    {
        Finalpush.push_back(num2[j]);
        j++;
    }
    cout << "This Is Your Final Union Array: ";
    for (int val : Finalpush)
    {
        cout << val << " ";
    }
    return 0;
}
