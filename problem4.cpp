#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<long long int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    long long int moves = 0;
    for (long long int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            moves += nums[i - 1] - nums[i];
            nums[i] = nums[i - 1];
        }
    }

    cout << moves;

    return 0;
}