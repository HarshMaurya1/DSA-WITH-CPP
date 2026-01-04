// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Your Value of (N): ";
//     cin >> n;

//     vector<int> nums(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     int largest = INT_MIN;
//     int second_largest = INT_MIN;

//     for (int x : nums)
//     {
//         if (x > largest)
//         {
//             second_largest = largest;
//             largest = x;
//         }
//         else if (x < largest && x > second_largest)
//         {
//             second_largest = x;
//         }
//     }
//     if (second_largest == INT_MIN)
//     {
//         cout << -1;
//     }
//     else
//     {
//         cout << second_largest;
//     }
// }

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Your Value of (N): ";
//     cin >> n;

//     vector<int> nums(n);
//     for (int i = 1; i <= 100; i++)
//     {
//         cin >> nums[i];
//     }

//     int largest = INT_MIN;
//     int second_largest = INT_MIN;

//     for (int x : nums)
//     {
//         if (x > largest)
//         {
//             second_largest = largest;
//             largest = x;
//         }
//         else if (x < largest && x > second_largest)
//         {
//             second_largest = x;
//         }
//     }
//     if (second_largest == INT_MIN)
//     {
//         cout << -1;
//     }
//     else
//     {
//         cout << second_largest;
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter The Value: ";
//     cin >> n;
//     vector<int> num(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> num[i];
//     }
//     bool increasing = true;
//     bool decrease = true;

//     for (int i = 0; i < n - 1; i++)
//     {
//         if (num[i] > num[i + 1])
//         {
//             increasing = false;
//         }
//         if (num[i] > num[i + 1])
//         {
//             decrease = false;
//         }
//     }
//     if (increasing || decrease)
//     {
//         cout << "True";
//     }
//     else
//     {
//         cout << "False";
//     }
// }
