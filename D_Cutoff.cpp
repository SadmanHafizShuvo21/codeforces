//07 Jan 2025
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,k;
    std::cin>>n>>k;
    std::vector<ll>v(n-1);
    for(int i=0;i<n-1;i++){
        std::cin>>v[i];
    }
    for (int i = 0; i <= 100; i++) {
        std::vector<ll> scores=v;
        scores.push_back(i);
        std::sort(scores.begin(), scores.end());
        int total = 0;
        for (int i = 1; i < n - 1; ++i) {
            total += scores[i];
        }
        if (total >= k) {
            std::cout << i << "\n";
            return;
        }
    }
    std::cout<<-1<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // std::cin>>t;
    // while(t--)
    solve();
}

