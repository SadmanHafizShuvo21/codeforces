#include<bits/stdc++.h>
using ll = long long;
ll countDivisors(ll n) {
    ll count = 0;
    for (int i = 0; i < 63; i++) {
        ll d = 1LL << i;
        if (d > n){
            break;
        } 
        if (n % d == 0) {
            count++;
        }
    }
    return count;
}
void solve() {
    ll n;
    std::cin >> n;
    std::cout << countDivisors(n) << '\n';
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