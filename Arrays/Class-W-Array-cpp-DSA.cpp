// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {
//         1,
//         2,
//         3,
//         4,
//         5,
//     };
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {
//         1,
//         2,
//         3,
//         4,
//         5,
//     };
//     for (int i = 0; i < 5; i++)
//     {
//         arr[i] += 5;
//         cout << arr[i] << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {
//         1,
//         2,
//         3,
//         4,
//         5,
//     };
//     int arr_length=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     cout<<arr_length;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter The sige of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " numbers" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int biggest = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > biggest)
//         {
//             biggest = arr[i];
//         }
//     }
//     cout << biggest;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Your Value: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter " << n << " Sorted Elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     if (n == 0)
//     {
//         cout << "0";
//         return 0;
//     }
//     int x = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] != arr[i - 1])
//         {
//             arr[x] = arr[i];
//             x++;
//         }
//     }
//     cout << endl
//          << x << " is Unique Elements " << endl;
//     cout << "resulting Array: ";
//     for (int i = 0; i < x; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }