#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll q;
    std::cin>>q;
    std::vector<ll>v;
    while(q--){
        int a;
        std::cin>>a;
        if(a==0){
            int x;
            std::cin>>x;
            v.push_back(x);
        }
        else if(a==1){
            int x;
            std::cin>>x;
            std::cout<<v[x]<<'\n';
        }
        else{
            v.pop_back();
        }
    }  
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

