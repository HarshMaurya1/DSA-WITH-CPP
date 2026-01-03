#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    unordered_map<int,int> mp;
    int sum = 0;
    int maxLen = 0;
    int start = -1, end = -1;

    for(int i = 0; i < n; i++){
        sum += nums[i];

        // Case 1: subarray from index 0
        if(sum == k){
            maxLen = i + 1;
            start = 0;
            end = i;
        }

        // Case 2: subarray from middle
        if(mp.find(sum - k) != mp.end()){
            int len = i - mp[sum - k];
            if(len > maxLen){
                maxLen = len;
                start = mp[sum - k] + 1;
                end = i;
            }
        }

        // store prefix sum only first time
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }

    if(maxLen > 0){
        cout << "\nk = " << k << endl;
        cout << "Numbers used: ";

        int total = 0;
        for(int i = start; i <= end; i++){
            cout << nums[i];
            total += nums[i];
            if(i < end) cout << " + "; 
        }
        cout << " = " << total << endl;
    }
    else{
        cout << "No subarray found whose sum is " << k;
    }

    return 0;
}