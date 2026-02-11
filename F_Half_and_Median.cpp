#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool canAchieveMedian(const vector<ll>& a, ll N, ll M, ll median) {
    ll need = (N + M) / 2 + 1;
    ll total = 0;
    for (ll x : a) {
        total += x / median; // max pieces of length >= median from this stick
        if (total >= need) return true;
    }
    return total >= need;
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        ll N, M;
        cin >> N >> M;
        vector<ll> a(N);
        for (int i = 0; i < N; i++) cin >> a[i];

        ll low = 1, high = *max_element(a.begin(), a.end()), ans = 1;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (canAchieveMedian(a, N, M, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
