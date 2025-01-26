#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n;
    std::cin>>n;
    std::set<int>s;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        s.insert(x);
    }
    std::cout<<s.size(); 
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}