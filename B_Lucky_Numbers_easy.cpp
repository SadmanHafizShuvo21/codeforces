#include <bits/stdc++.h>
using ll = long long;
const ll MAX_NUM = 1e18;
std::vector<ll> arr;

void check(ll num, ll c4, ll c7) {
    if (num > MAX_NUM) {
        return;  
    }            
    if (c4 == c7 && num > 0) {
        arr.push_back(num);     
    }
    check(num * 10 + 4, c4 + 1, c7);
    check(num * 10 + 7, c4, c7 + 1);
}

void solve() { 
    ll n;
    std::cin >> n;
    std::sort(arr.begin(), arr.end());
    std::cout << *std::lower_bound(arr.begin(), arr.end(), n) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    check(0, 0, 0);
    solve();
}
