#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 1e6 + 5; 
const ll error = 1e-6;
std::vector<int> arr[N];
std::vector<bool> is_prime(N + 1, true);

void sieve(int n) {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = 1LL * i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

void solve() {
    ll n, m;
    std::cin >> n >> m;

    std::vector<ll> a(n + 1, 0); 
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        ll x;
        std::cin >> x;
        ll r = std::sqrt(x);
        
        if (r * r == x && is_prime[r]) {
            sum++;
        }
        a[i] += sum;
    }

    while (m--) {
        ll l, r;
        std::cin >> l >> r;
        std::cout << a[r] - a[l - 1] << " ";
    }
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    sieve(N);
    solve();
}
