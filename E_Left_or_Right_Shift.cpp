#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n,k;
    std::cin >> n >> k;

    std::string s;
    std::cin >> s;

    for (int i = 0; i < n; i++) {
        int dis = s[i] - 'a';
        int r = 26 - dis;
        int cost = std::min(dis, r);

        if (k >= cost) {
            if (dis <= r) {
                k -= dis;
                s[i] = 'a';
            } 
            else {
                k -= r;
                s[i] = 'a';
            }
        } 
        else {
            int ch = (s[i] - 'a' - k + 26) % 26;
            s[i] = 'a' + ch;
            k = 0;
            break;
        }
    }

    if (k > 0) {
        int l = s.find_last_not_of('a');
        if (l != std::string::npos) {
            int ch = (s[l] - 'a' - k + 26) % 26;
            s[l] = 'a' + ch;
        }
    }

    std::cout << s << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
