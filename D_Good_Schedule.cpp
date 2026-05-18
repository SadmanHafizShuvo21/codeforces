#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int multTestQ;
    cin >> multTestQ;
    while (multTestQ--) {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i) cin >> b[i];

        vector<vector<int>> all_pos(n + 2);
        vector<vector<int>> good_pos(n + 2);
        vector<bool> is_good(n + 1, false);
        vector<int> good_ep(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            all_pos[a[i]].push_back(i);
            if (a[i] != b[i]) {
                all_pos[b[i]].push_back(i);
            } else {
                is_good[i] = true;
                good_ep[i] = a[i];
                good_pos[a[i]].push_back(i);
            }
        }

        vector<int> next_bad_good(n + 1, 0);

        for (int m = n; m >= 1; --m) {
            if (good_pos[m].empty()) continue;
            const auto& nxt_all = all_pos[m + 1];
            for (int p : good_pos[m]) {
                int cur = p + 1;
                auto it = lower_bound(nxt_all.begin(), nxt_all.end(), cur);
                if (it == nxt_all.end()) {
                    next_bad_good[p] = n + 1;
                } else {
                    int q = *it;
                    if (is_good[q] && good_ep[q] == m + 1) {
                        next_bad_good[p] = next_bad_good[q];
                    } else {
                        next_bad_good[p] = q;
                    }
                }
            }
        }

        vector<int> next_one(n + 2);
        next_one[n + 1] = n + 1;
        for (int i = n; i >= 1; --i) {
            if (a[i] == 1 || b[i] == 1) next_one[i] = i;
            else next_one[i] = next_one[i + 1];
        }

        long long ans = 0;
        for (int i = 1; i <= n; ++i) {
            int q = next_one[i];
            int next_bad;
            if (q == n + 1) {
                next_bad = n + 1;
            } else {
                if (is_good[q] && good_ep[q] == 1) {
                    next_bad = next_bad_good[q];
                } else {
                    next_bad = q;
                }
            }
            ans += (next_bad - i);
        }
        cout << ans << '\n';
    }
    return 0;
}