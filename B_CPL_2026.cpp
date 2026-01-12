#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;
std::vector<int> primes;
std::vector<int> arr[N];
ll depth[N], vis[N];

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    ll w = 3, out = 0, stk = 1, nonstk = 2;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1' || s[i] == '3') {
            std::swap(stk, nonstk);
        }
        else if (s[i] == 'W') {
            out++;
            if (out == 10) {
                std::cout << nonstk << "\n";
                return;
            }
            stk = w;
            w++;
        }
        // std::cout << stk << " ";
        if ((i + 1) % 6 ==  0) {
            std::swap(stk, nonstk);
        }
    }

    // std::cout << stk << " " << nonstk << "\n";
    std::cout << stk << "\n";
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
// 