#include <bits/stdc++.h>
using ll = long long;
const ll MAX = 1000000;

std::vector<std::vector<ll>> divs(MAX + 1);
std::vector<ll> mu(MAX + 1, 0);
std::vector<bool> vis(MAX + 1, false);
std::vector<ll> primes;


void seive() {
    mu[1] = 1;
    for (int i = 2; i <= MAX; i++) {
        if (!vis[i]) {
            primes.push_back(i);
            mu[i] = -1;
        }
        for (int p : primes) {
            if (1LL * i * p > MAX) break;
            vis[i * p] = true;
            if (i % p == 0) {
                mu[i * p] = 0;
                break;
            } 
            else {
                mu[i * p] = -mu[i];
            }
        }
    }
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> freq(MAX + 1, 0);
    ll total = 0;
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
        total += a[i];
    }

    std::vector<ll> sm(MAX + 1, 0);
    for (int i = 1; i <= MAX; i++) {
        if (freq[i] == 0) {
            continue;
        }
        for (int d : divs[i]) {
            sm[d] += freq[i] * i;
        }
    }

    ll mn = LLONG_MAX;
    for (int p = 1; p <= MAX; p++) {
        if (freq[p] == 0) {
            continue;
        }
        ll sum = 0;
        for (int d : divs[p]) {
            sum += 1LL * mu[d] * sm[d];
        }
        ll val = sum + p;
        mn = std::min(mn, val);
    }

    ll ans = 2LL * total - mn;
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    seive();
    solve();
}
