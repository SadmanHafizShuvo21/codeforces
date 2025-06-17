#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<pair<int, int>> ops;

    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            swap(a[i], b[i]);
            ops.emplace_back(3, i + 1);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j + 1 < n; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ops.emplace_back(1, j + 1);
            }
            if (b[j] > b[j + 1]) {
                swap(b[j], b[j + 1]);
                ops.emplace_back(2, j + 1);
            }
        }
    }

    cout << ops.size() << '\n';
    for (auto &[a, b] : ops) {
        cout << a << ' ' << b << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
