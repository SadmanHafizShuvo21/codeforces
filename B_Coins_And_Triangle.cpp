#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin>>n;
    ll low = 1, high=n,ans=0;
    while(low<=high){
        ll mid = (low+high)/2;
        ll sum = mid*(mid+1)/2;
        if(sum<=n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high=mid-1;
        }
    }
    std::cout<<ans<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}