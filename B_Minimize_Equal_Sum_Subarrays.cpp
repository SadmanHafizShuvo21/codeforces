#include <bits/stdc++.h>
using ll = long long;

void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::rotate(a.begin(), a.begin() + 1, a.end());
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" \n"[i==n-1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}
