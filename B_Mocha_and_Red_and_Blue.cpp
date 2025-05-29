#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            continue;
        }
        for (int j = i - 1; j >= 0 && s[j] == '?'; j--) {
            s[j] = (s[j + 1] == 'R' ? 'B' : 'R');
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            s[i] = (i > 0 && s[i - 1] != '?' ? (s[i - 1] == 'R' ? 'B' : 'R') : 'B');
        }
    }
    
    std::cout << s << "\n";
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