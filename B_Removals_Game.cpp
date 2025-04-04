#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::vector<ll> a(n),b(n),stoa(n+1),stob(n+1);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        stoa[a[i]]=i;
    }
    for(int i=0;i<n;i++){
        std::cin>>b[i];
        stob[b[i]]=i;
    }
    ll posa=-1,posb=-1;
    for(int i=1;i<=n;i++){
        posa=std::max(posa,stoa[i]);
        posb=std::max(posb,stob[i]);
    }
    std::cout<<(a[posa]==b[posb]?"Bob":"Alice")<<"\n";
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
