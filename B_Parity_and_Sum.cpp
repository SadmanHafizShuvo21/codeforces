//06 Aug 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>even,odd;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        if(x%2==0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
    }
    if(odd.size()==0){
        std::cout<<0<<"\n";
        return;
    }
    std::sort(even.begin(),even.end());
    std::sort(odd.begin(),odd.end());
    ll cur=odd.back();
    ll ans=even.size();
    for(int i=0;i<even.size();i++){
        if(cur<even[i]){
            ans++;
            break;
        }
        cur+=even[i];
    }
    std::cout<<ans<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}
