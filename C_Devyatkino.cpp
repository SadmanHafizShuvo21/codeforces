#include <bits/stdc++.h>
using ll = long long;

void solve(){
    int n;
    std::cin >> n;
    for(int i=0;i<=9;i++){
        std::string s=std::to_string(n-i);
        // std::cout<<s<<" \n";
        int a=0;
        for(auto c : s){
            if(c<='7'){
                a=std::max(a,c-'0');
            }
        }
        if(i>=7-a){
            std::cout<<i<<"\n";
            return;
        }
    }
    
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
