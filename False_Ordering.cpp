#include<bits/stdc++.h>
using ll = long long;
std::vector<ll> v(1001);
std::vector<std::pair<ll, ll>> ans;

void precompute() {
    for (ll i = 1; i <= 1000; i++) { 
        for (ll j = i; j <= 1000; j += i) {
            v[j]++;
        }
    }
    for (ll i = 1; i <= 1000; i++) {
        ans.push_back({v[i], -i});
    }
    std::sort(ans.begin(), ans.end());
}

void solve(int t) {
    ll n;
    std::cin >> n;
    std::cout << "Case " << t << ": " << -ans[n - 1].second << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();
    int t;
    std::cin >> t;
    for (int i = 1; i <= t; i++) { 
        solve(i);
    }
}