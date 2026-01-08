#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ld long double
#define eps 1e-7

bool is_valid(ld speed, const vector<pair<int, int>>& windows) {
    for (int i = 0; i < windows.size(); ++i) {
        ld time = (i + 1) / speed;
        if (time + eps < windows[i].first || time - eps > windows[i].second)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int N;
        cin >> N;
        vector<pair<int, int>> windows(N);
        for (int i = 0; i < N; ++i) {
            cin >> windows[i].first >> windows[i].second;
        }

        ld lo = 1e-9, hi = 1e9, ans = -1;
        for (int iter = 0; iter < 100; ++iter) {
            ld mid = (lo + hi) / 2;
            if (is_valid(mid, windows)) {
                ans = mid;
                hi = mid;
            } else {
                lo = mid;
            }
        }

        cout << "Case #" << tc << ": ";
        if (ans < 0)
            cout << -1 << '\n';
        else
            cout << fixed << setprecision(10) << ans << '\n';
    }

    return 0;
}
