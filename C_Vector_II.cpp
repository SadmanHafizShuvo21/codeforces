#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n,q;
    std::cin>>n>>q;
    std::vector<std::vector<int>> v(n);
    while(q--){
        int a,t,x;
        std::cin>>a>>t;
        
        if(a==0) {
            std::cin>>x;
            v[t].push_back(x);
        } 
        else if(a==1) {
            for (int i=0;i<v[t].size();i++) {
                if (i>0) {
                    std::cout<<" ";
                }
                std::cout<<v[t][i];
            }
            std::cout<<'\n';
        } 
        else{
            v[t].clear();
        }
    }  
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}

