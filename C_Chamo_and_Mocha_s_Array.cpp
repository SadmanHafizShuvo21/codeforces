//02 June 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }
    ll ans=0;
    for (int i = 0; i < n - 1; i++) {
        ans=std::max(ans,std::min(a[i],a[i+1]));
    }
    
    for (int i = 0; i < n - 2; i++) {
        ans=std::max(ans,std::min(a[i],a[i+2]));
    }
    std::cout << ans << '\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

