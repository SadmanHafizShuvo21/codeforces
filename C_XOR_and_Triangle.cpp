#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin>>n;
    ll b = (n & -n) | (~n & -~n);
    std::cout << (b < n ? b : -1) << '\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
