#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter Your Number: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "This is a array's double values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        int d = arr[i] * 2;
        cout << d << " ";
    }
}