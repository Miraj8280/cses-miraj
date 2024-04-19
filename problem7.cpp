#include<bits/stdc++.h>
using namespace std;

int main () {
    long long n;
    cin >> n;

    cout << 0 << endl;
    for (long long i = 2; i <= n; i++) {
        long long total_ways = (long long) (i * i) * (i * i - 1) / 2;
        long long attacking_positions = (long long) 4 * (i - 2) * (i - 1);

        cout << total_ways - attacking_positions << endl;
    }

    return 0;
}