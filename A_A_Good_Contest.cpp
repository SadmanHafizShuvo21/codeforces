#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    bool ok = false;
    for(int i=0;i<n;i++){
        std::string s;
        int a,b;
        std::cin>>s>>a>>b;
        if(a<b && a>=2400){
            std::cout<<"YES"<<"\n";
            return;
        }
    }
    std::cout<<"NO"<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}