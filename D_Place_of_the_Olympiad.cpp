#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        ll max_bench_length = (k + n - 1) / n;  // Calculate the ceiling of k / n
        cout << min(max_bench_length, m) << '\n'; // Ensure the bench length is not more than m
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
