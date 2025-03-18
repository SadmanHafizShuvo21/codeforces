#include<bits/stdc++.h>
using ll = long long;

void solve (){
    ll n,k;
    std::cin>>n>>k;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    if (k == 1) {
        ll first=a[0]+*std::max_element(a.begin()+1, a.end());
        ll last=a[n-1] + *std::max_element(a.begin(), a.end() - 1);
        ll ans= std::max(first,last);
        std::cout << ans << "\n";
        return;
    }

    std::sort(a.begin(),a.end(),std::greater<ll>());
    ll sum = std::accumulate(a.begin(), a.begin()+k+1, 0LL);;
    std::cout<<sum<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}