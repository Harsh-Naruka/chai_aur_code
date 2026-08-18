#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, H, M;
        cin >> n >> H >> M;

        int current = H * 60 + M;
        int ans = 24 * 60;

        for (int i = 0; i < n; i++) {
            int h, m;
            cin >> h >> m;

            int alarm = h * 60 + m;
            int diff = alarm - current;
        }

        cout << ans / 60 << " " << ans % 60 << endl;
    }

    return 0;
}