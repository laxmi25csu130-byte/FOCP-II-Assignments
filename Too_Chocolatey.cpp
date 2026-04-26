#include<bits/stdc++.h>
using namespace std;

string solve (int n, vector<int> arr) {
   sort(arr.begin(), arr.end(), greater<int>());
   int a = 0;
   int b = 0;
   int max = arr[0];
   int turn = 0;
   vector<int> alex(max + 1, 0);
   vector<int> bob(max + 1, 0);
   for(int i = 0; i < n; i++) {
        if(turn == 0) {
            if(alex[arr[i]] == 0) {
                a += arr[i];
                alex[arr[i]]++;
                turn = 1;
            }
        }else {
            if(bob[arr[i]] == 0) {
                b += arr[i];
                bob[arr[i]]++;
                turn = 0;
            }
        }
   }
   if(a > b) return "Alex";
   else return "Bob";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i_arr = 0; i_arr < n; i_arr++)
        {
        	cin >> arr[i_arr];
        }

        string out_;
        out_ = solve(n, arr);
        cout << out_;
        cout << "\n";
    }
}