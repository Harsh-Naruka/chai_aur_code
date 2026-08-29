#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<bool> used(2 * n + 1, false);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                used[x] = true;
            }
        }

        int missing = 0;

        for (int x = 1; x <= 2 * n; x++) {
            if (!used[x]) {
                missing = x;
                break;
            }
        }

        cout << missing << " ";

        for (int x = 1; x <= 2 * n; x++) {
            if (used[x])
                cout << x << " ";
        }

        cout << '\n';
    }

    return 0;
}