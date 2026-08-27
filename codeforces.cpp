#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            a[i] = 2; // Step 1: Replace 1s with 2s
        }
    }

    // Step 2: Ensure a[i+1] % a[i] != 0
    for (int i = 0; i < n - 1; ++i) {
        if (a[i + 1] % a[i] == 0) {
            a[i + 1]++;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}