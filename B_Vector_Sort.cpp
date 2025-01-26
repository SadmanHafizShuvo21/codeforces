#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n;
    std::cin>>n;
    std::vector<int>v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
    }
    std::sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        std::cout<<v[i]<<" \n"[i==n-1];
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}