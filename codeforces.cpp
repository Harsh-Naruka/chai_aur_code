#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[3001] = {0};

    for (int i = 2; i <= n; i++) {
        if (cnt[i] == 0) {   // i is prime
            for (int j = i; j <= n; j += i) {
                cnt[j]++;
            }
        }
    }

    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (cnt[i] == 2)
            ans++;
    }

    cout << ans+1;

    return 0;
}