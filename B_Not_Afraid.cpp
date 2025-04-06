#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        unordered_map<int, char> roles;
        bool valid = true;
        for (int j = 0; j < k; ++j) {
            int v;
            cin >> v;
            int u = abs(v);
            char role = (v < 0) ? 'R' : 'M';
            if (roles.find(u) != roles.end()) {
                if (roles[u] != role) {
                    valid = false;
                }
            } else {
                roles[u] = role;
            }
        }
        if (valid) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}