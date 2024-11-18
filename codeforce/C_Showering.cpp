//07 Aug 2024
#include <bits/stdc++.h>
using ll = long long;

void solve(){
    int n,s,m;
    std::cin>>n>>s>>m;
    int x=0;
    bool ok = false;
    while(n--){
        int l,r;
        std::cin>>l>>r;
        if(l-x>=s){
            ok = true;
        }
        x=r;
    }
    if(m-x>=s){
        ok=true;
    }
    if(ok){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
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
