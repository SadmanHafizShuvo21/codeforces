#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e6 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    ll cnta = 0, cntb = 0, both = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != '.') {
            continue;
        }

        bool oka = true, okb = true;
        if ((i > 0 && s[i - 1] == 'a') || (i + 1 < n && s[i + 1] == 'a')) {
            oka = false;
        }
        
        if ((i > 0 && s[i - 1] == 'b') || (i + 1 < n && s[i + 1] == 'b')) {
            okb = false;
        }

        if (oka && okb) {
            both++;
        } 
        else if (oka) {
            cnta++;
        } 
        else if (okb) {
            cntb++;
        }
    }

    if (cnta > cntb) {
        std::cout << "alice" << "\n";
    } 
    else if (cnta < cntb) {
        std::cout << "bob" << "\n";
    } 
    else {
        std::cout << (both % 2 ? "alice" : "bob") << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}
