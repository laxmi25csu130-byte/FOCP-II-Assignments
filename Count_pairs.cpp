#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000000;

int primeCount[MAXN + 1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 2; i <= MAXN; i++) {
        if (primeCount[i] == 0) {
            for (int j = i; j <= MAXN; j += i) {
                primeCount[j]++;
            }
        }
    }

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        cout << (1 << primeCount[n]) << '\n';
    }

    return 0;
}
