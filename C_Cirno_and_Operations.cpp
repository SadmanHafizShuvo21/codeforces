#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        sum+=a[i];
    }
    for (int i = 1; i < n; i++) {
        std::vector<ll> b(a.size() - 1);
        ll sumb=0;
        for (int j = 0; j < b.size(); j++) {
            b[j] = a[j + 1] - a[j];
            sumb+=b[j];
        }

        sum = std::max(sum, std::abs(sumb));
        a = b;
    }
    std::cout<<sum<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

