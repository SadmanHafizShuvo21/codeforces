#include<bits/stdc++.h>
using ll = unsigned long long int;

void solve() {
    ll n,k;
    std::cin >> n >> k;
    std::set<ll> a;
    for(ll i=1;i<=std::sqrt(n);i++){
        if(n%i==0){
            a.insert(i);
            a.insert(n/i);
        }
    }
    std::vector<ll>v;
    v.assign(a.begin(),a.end());
    if(v.size()>=k){
        std::cout<<v[k-1]<<"\n";
    }
    else{
        std::cout<<-1<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
