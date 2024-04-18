#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> nums(n - 1);
    long long int currSum = 0;

    for (int i = 0; i < n - 1; ++i) {
        cin >> nums[i];
        currSum += nums[i];
    }

    cout << n * (n + 1) / 2 - currSum; // Missing num

    return 0;
}

