#include <bits/stdc++.h>
using namespace std;

bool can_achieve(vector<int> a, int s) {
    int n = a.size();
    vector<vector<bool>> vis(n, vector<bool>(s + 1));
    queue<pair<int, int>> q;
    vis[0][a[0]] = true;
    q.push({0, a[0]});
    while (!q.empty()) {
        auto [i, sum] = q.front(); q.pop();
        if (i == n - 1 && sum == s) return true;
        for (int d : {-1, 1}) {
            int j = i + d;
            if (j >= 0 && j < n && sum + a[j] <= s && !vis[j][sum + a[j]]) {
                vis[j][sum + a[j]] = true;
                q.push({j, sum + a[j]});
            }
        }
    }
    return false;
}

void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    if (accumulate(a.begin(), a.end(), 0) > s) {
        for (int i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1];
        return;
    }

    vector<vector<int>> perms;
    vector<int> b = a;
    sort(b.begin(), b.end()); perms.push_back(b);
    reverse(b.begin(), b.end()); perms.push_back(b);

    int c0 = count(a.begin(), a.end(), 0);
    int c1 = count(a.begin(), a.end(), 1);
    int c2 = count(a.begin(), a.end(), 2);
    vector<vector<int>> combs = {
        {0,1,2}, {0,2,1}, {1,0,2}, {1,2,0}, {2,0,1}, {2,1,0}
    };

    for (auto &order : combs) {
        vector<int> tmp;
        for (int v : order) tmp.insert(tmp.end(), (v == 0 ? c0 : v == 1 ? c1 : c2), v);
        perms.push_back(tmp);
    }

    for (auto &p : perms) {
        if (!can_achieve(p, s)) {
            for (int i = 0; i < n; i++) cout << p[i] << " \n"[i == n - 1];
            return;
        }
    }
    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
}
