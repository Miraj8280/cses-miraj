#include<bits/stdc++.h>
using namespace std;

int main () {
    long long int n;
    cin >> n;

    // Corner case
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (long long i = 1; i <= n; i++) {
        // Even
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    for (long long i = 1; i <= n; i++) {
        // Odd
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}