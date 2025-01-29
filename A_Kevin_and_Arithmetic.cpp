#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n,odd=0;
    std::cin >> n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
        odd+=(v[i]%2);
    }
    ll ans = std::min(odd,n-1)+std::min(1LL,n-odd);
    std::cout<<ans<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
