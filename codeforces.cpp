#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(k + 1);
        for (int i = 1; i <= k; i++)
            cin >> a[i];

        vector<queue<int>> level(k + 2);
        vector<int> cnt(k + 2, 0);

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            level[x].push(i);
            cnt[x]++;
        }

        vector<int> ans;

        while (true) {
            bool finished = true;
            for (int i = 1; i <= k; i++) {
                if (cnt[i] > 0) {
                    finished = false;
                    break;
                }
            }

            if (finished) break;

            bool moved = false;

            for (int i = k; i >= 1; i--) {
                if (cnt[i] == 0) continue;

                if (i == k || cnt[i + 1] < a[i + 1]) {
                    int id = level[i].front();
                    level[i].pop();

                    level[i + 1].push(id);

                    cnt[i]--;
                    cnt[i + 1]++;

                    ans.push_back(id);
                    moved = true;
                    break;
                }
            }

            if (!moved) {
                cout << -1 << '\n';
                goto next_case;
            }
        }

        cout << ans.size() << '\n';
        for (int x : ans)
            cout << x << ' ';
        cout << '\n';

        next_case:;
    }

    return 0;
}