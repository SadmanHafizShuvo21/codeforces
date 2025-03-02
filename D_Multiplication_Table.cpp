#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin>>n;
    ll low = 1, high=n*n;
    ll median = (n*n+1)/2;
    while(low<high){
        ll mid = (low+high)/2;
        ll cnt = 0;
        for(ll i = 1; i <= n; i++) {
            cnt += std::min(mid / i, n);  
        }
        if(cnt>=median){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    std::cout<<low<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}