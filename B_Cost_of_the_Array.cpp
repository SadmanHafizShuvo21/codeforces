#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n,k;
    std::cin >> n >> k;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        a.push_back(x);
    }
    auto it = unique(a.begin(), a.end());
    a.erase(it, a.end());
    // for(int i=0;i<a.size();i++){
    //     std::cout<<a[i]<<" \n"[i==a.size()-1];
    // }
    a.push_back(0);
    ll cnt=0;
    for(int i=0;i<a.size();i++){
        if(i+1!=a[i]){
            break;
        }
        cnt++;
    }
    std::cout<<cnt+1<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
