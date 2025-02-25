#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll a;
    std::cin>>a;
    ll ans = a/4;
    if(a%4!=0){
      ans++;
    }
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