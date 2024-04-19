#include<bits/stdc++.h>
using namespace std;

int main () {
    long long n;
    cin >> n;

    long long sum = (long long) n * (n + 1) / 2;

    if (sum % 2 != 0) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        vector<long long> set1, set2;
        sum /= 2;

        while (n > 0) {
            if (sum - n >= 0) {
                set1.push_back(n);
                sum -= n;
            }
            else {
                set2.push_back(n);
            }
            n--;
        }

        cout << set1.size() << "\n";
        for (long long i = 0; i < set1.size(); ++i) {
            cout << set1[i] << " ";
        }
        cout << "\n";

        cout << set2.size() << "\n";
        for (long long i = 0; i < set2.size(); ++i) {
            cout << set2[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}