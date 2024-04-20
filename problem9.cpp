#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main () {
    int n;
    cin >> n;

    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= 2;
        result %= MOD;
    }

    cout << result;

    return 0;
}