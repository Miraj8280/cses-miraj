#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    long long int input;
    long long int currSum = 0;

    for (int i = 0; i < n - 1; ++i) {
        cin >> input;
        currSum += input;
    }

    cout << n * (n + 1) / 2 - currSum; // Missing num

    return 0;
}

