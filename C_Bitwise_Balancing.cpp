#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin>>n;

    std::cout <<n+ll(sqrtl(n)+0.5) << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
