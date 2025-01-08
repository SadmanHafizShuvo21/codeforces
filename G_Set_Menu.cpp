//07 Jan 2025
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,m,p;
    std::cin>>n>>m>>p;
    std::vector<ll>a(n),b(m);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<m;i++){
        std::cin>>b[i];
    }
    std::sort(b.begin(),b.end());
    std::vector<ll> prefixSum(m + 1, 0);
    for(int i=0;i<m;i++){
        prefixSum[i+1]=prefixSum[i]+b[i];
    }
    
    ll ans = 0;
    for (int arr : a) {
        int low = 0, high = m;
        while (low < high) {
            int mid = (low + high) / 2;
            if (arr + b[mid] >= p) {
                high = mid;
            } 
            else {
                low = mid + 1;
            }
        }
        int i = low;
        ans += prefixSum[i] + static_cast<ll>(i) * arr + static_cast<ll>(m - i) * p;
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // std::cin>>t;
    // while(t--)
    solve();
}

