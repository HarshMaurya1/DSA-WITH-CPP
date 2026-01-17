// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "Enter Your Value : ";
//     cin >> n;
//     cout << n << endl;
// }

// #include <iostream>
// using namespace std;

// int printNumber()
// {
//     int n;
//     cin >> n;
//     cout << n;
// }

// int main()
// {
//     printNumber();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int printNumber()
// {
//     return 10;
// }

// int main()
// {
//     cout << printNumber();
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// char arr[4] = {4, 5, 6, 1};
// cout <<"Array is correctively initialised: " << endl;

// int arr[] = {1, 2, 3, 4 };
// cout << arr[0] << endl;

// string arr[] = {"Harsh", "Nupur", "Chomu"};
// cout << arr[0] << endl;

// int arr[] = {3,5,9,8,4};
// cout << arr[2] <<endl;

// int arr[] = {1, 3, 5, 7, 9};
// for (int i = 0; i < 5; i++)
// {
//     cout << arr[i] << " ";
// }

// string arr[] = {"harsh", "chomu", "nupur", "puchhu", "panda", "my_panda"};
// for (int i = 0; i < 5; i++)
// {
//     cout << arr[i] << " ";
// }

// int arr[] = {1, 3, 5, 7, 9};
// for (int index = 0; index < 5; index++)
// {
//     cout << arr[index] << " ";
// }

// int arr[10];

// cout << "Enter Your Number: " << endl;
// for (int i = 0; i < 10; i++)
// {
//     cin >> arr[i];
// }
// // printing
// cout << "Printing The Values In Array: " << endl;
// for (int i = 0; i < 10; i++)
// {
//     cout << arr[i] << " ";
// }

//     int arr[15];
//     cout << "Enter Your Number: ";
//     for (int i = 0; i < 15; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Printing The Value In Array: " << endl;
//     for (int i = 0; i < 15; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     cout << "Enter Your Number: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "This is a array's double values: " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         int d = arr[i] * 2;
//         cout << d << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // TAKE A INPUT FROM USER"
//     int arr[10];
//     cout << "Enter Your Values: ";
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "This Your Array Double Values: " << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] * 2 << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool find(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//     }

//     return false;
// }

// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = 10;
//     cout << "Enter The Value OF key : " << endl;
//     int key;
//     cin >> key;

//     if (find(arr, size, key))
//     {
//         cout << "Yes Found" << endl;
//     }
//     else
//     {
//         cout << "Sorry Not Found" << endl;
//     }
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// bool find(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {

//     int arr[5] = {1, 3, 5, 7, 8};
//     int size = 5;

//     cout << "Enter The Key To Find: " << endl;
//     int key;
//     cin >> key;

//     if (find(arr, size, key))
//     {
//         cout << "Yes Found" << endl;
//     }
//     else
//     {
//         cout << "Sorry Not Found" << endl;
//     }
// }

// TAKE A INPUT FROM USER"
// int arr[5] = {1, 3, 5, 7, 9};
// for (int i = 0; i < 5; i++)
// {
//     cout << arr[i];
// }
// for (int i = 0; i < 5; i++)
// {
//     cout << arr[i] << " ";
// }

// int arr[10] = {1, 2};
// for (int i = 0; i < 10; i++)
// {
//     cout << arr[i] << ' ';
// }

//  int arr[10];
// for (int i = 0; i < 10; i++)
// {
//     cout << arr[i] << ' ';
// }

// int arr[10] = {0};
// for (int i = 0; i < 10; i++)
// {
//     cout << arr[i] << ' ';
// }

// int arr[10];
// cout << "Enter Your Number: ";
// for (int i = 0; i < 10; i++)
// {
//     cin >> arr[i];
// }
// cout >> "This is your (+/-/*/%) value: ";
// for (int i = 0; i < 10; i++)
// {
//     cout << arr[i] * 2 << " ";
// }
// return 0;

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     int arr[15] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1};

//     int size = 15;
//     int num_Zero = 0;
//     int num_One = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 0)
//         {
//             num_Zero++;
//         }
//         if (arr[i] == 1)
//         {
//             num_One++;
//         }
//     }
//     cout << "Number of Zeros: " << num_Zero << endl;
//     cout << "Number of Ones: " << num_One << endl;
// }

// #include <iostream>
// #include <cstring>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 3, 5, 7, 9, 10, 15, 25, 95};
//     int size = 9;
//     int small = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < small)
//         {
//             // found a number greater than maxi' so update maxi>>
//             small = arr[i];
//         }
//     }
//     cout << "Greater Number is: " << small << endl;
// }

// Negative numbers are always smaller than positive
// numbers. Therefore, -1700 is a smaller value than 900.
// #include <iostream>
// #include <cstring>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     int arr[] = {900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, -1700, 1800, 1900, 2000};
//     int size = 12;
//     int small = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < small)

//         {
//             small = arr[i];
//         }
//     }

//     cout << "Here Is a Smaller Number: " << small << endl;
// }

// #include <iostream>
// #include <cstring>
// #include <limits.h>
// using namespace std;

// int main()
// {
//     int arr[8] = {10, 20, 30, 40, 50, 60, 70};
//     int size = 7;

//     int start = 0;
//     int end = size - 1;

//     while (true)
//     {
//         if (start > end)
//         {
//             break;
//         }

//         if (start == end)
//         {
//             cout << arr[start] << " ";
//         }
//         else
//         {
//             cout << arr[start] << " ";
//             cout << arr[end] << " ";
//         }

//         start++;
//         end--;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10];

//     cout << "Enter Your Number: " << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }
//     // printing
//     cout << "Printing The Values In Array: " << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }  