//10 July 2024
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
    if(n==s.size()){
        std::cout<<"YES"<<'\n';
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


