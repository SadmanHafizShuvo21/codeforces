#include<bits/stdc++.h>
using ll = long long;   
ll mod = 1e9 + 7;

ll modpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) {
            res = res * a % mod;
        }
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
void solve() {
    ll n;
    std::cin >> n;

    std::cout << modpow(2, n) << "\n";
}   

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}