#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(4*n);
    for(int i=0;i<4*n;i++){
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    std::vector<std::pair<int, int>> pairs;
    bool ok=true;
    for(int i=0;i<4*n;i+=2){
        if(a[i]!=a[i+1]){
            ok=false;
            break;
        }
        pairs.push_back({a[i], a[i]});
    }
    for (int i=0;i<n;i++) {
        if(pairs[i].first*pairs[2*n-1-i].first != pairs[0].first*pairs[2*n-1].first){
            ok = false;
            break;
        }
    }
    std::cout<<(ok?"YES":"NO")<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}