#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        long long ans = 0;

        // Try all possible values of s[0] and s[1]
        for (int first = 0; first <= 1; first++) {
            for (int second = 0; second <= 1; second++) {

                bool ok = true;

                for (int i = 0; i < n; i++) {
                    int expected;

                    if (i % 2 == 0) {
                        // positions 0,2,4,... depend on first
                        expected = first ^ (i / 2 % 2);
                  if
                    }
                }

                if (ok)
                    ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}