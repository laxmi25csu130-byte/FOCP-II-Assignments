#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for(int l = 1; l <= n; l++) {
        int ops = 0;

        for(int i = 0; i < n; ) {
            if(s[i] == '1') {
                ops++;
                i += l;
            } else {
                i++;
            }
        }

        if(ops <= k) {
            cout << l;
            break;
        }
    }

    return 0;
}