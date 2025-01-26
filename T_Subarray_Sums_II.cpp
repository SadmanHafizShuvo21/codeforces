#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n,x;
    std::cin >> n >> x;
    
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::map<ll, ll> prefix_count;
    ll curr_sum = 0, result = 0;
    
    prefix_count[0] = 1; 
    
    for (int i = 0; i < n; i++) {
        curr_sum += a[i];
        if (prefix_count.count(curr_sum - x)) {
            result += prefix_count[curr_sum - x];
        }
        prefix_count[curr_sum]++;
    }
    
    std::cout << result << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
