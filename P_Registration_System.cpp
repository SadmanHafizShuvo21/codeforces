#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n;
    std::cin>>n;
    std::string s;
    std::map<std::string,int>reg;
    for(int i=0;i<n;i++){
        std::cin>>s;
        if(reg[s]==0){
            std::cout<<"OK"<<'\n';
        }
        else{
            std::cout<<s<<reg[s]<<'\n';
        }
        reg[s]++;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}