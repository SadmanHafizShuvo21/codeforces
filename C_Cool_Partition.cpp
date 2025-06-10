#include <bits/stdc++.h>
using ll = long long;
void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::map<int, int> freq, cur;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        freq[a[i]]++;
    }

    int ans = 0;
    for (int i = n; i--;) {
        cur[a[i]]++;
        if (cur.size() == freq.size()) {
            for (auto [k, v] : cur) {
                if ((freq[k] -= v) == 0) {
                    freq.erase(k);
                }
            }
            cur.clear();
            ans++;
        }
    }

    std::cout << ans << '\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
