#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll q;
    std::cin>>q;
    std::set<ll>s;
    while(q--){
        int type,x;
        std::cin>>type>>x;
        if(type==1){
            s.insert(x);
        }
        else if(type==2){
            s.erase(x);
        }
        else{
            std::cout<<(s.find(x)!=s.end()?"Yes" : "No")<<'\n';
        }
    }  
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

