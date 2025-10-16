#include <bits/stdc++.h>
using ll = long long;
using llx = __int128;
const ll N = 1e7 + 6;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s;

    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            cnt++;
        }
        if (s[i] == 'L') {
            cnt--;
        }
    }
    std::cout << (cnt > 0 ? "Derecha" : (cnt == 0 ? "Linea Recta" : "Izquierda")) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
    solve();
}