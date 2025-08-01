#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin>>n;
    std::vector<int>a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<ll>pref(n + 1, 0);
    std::partial_sum(a.begin(), a.end(), pref.begin() + 1);

    ll q;
    std::cin >> q;
    while(q--){
        ll x;
        std::cin >> x;
        std::cout<<std::lower_bound(pref.begin(), pref.end(), x) - pref.begin() << "\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}


