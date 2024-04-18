#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count = 1;
    int result = 1;

    for (int i = 0; i < str.length() - 1; ++i) {
        if (str[i] == str[i + 1]) {
            count++;
        }
        else {
            count = 1;
        }

        result = max(result, count);
    }

    cout << result;

    return 0;
}
