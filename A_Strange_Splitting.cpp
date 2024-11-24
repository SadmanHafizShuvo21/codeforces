//10 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::string s(n,'R');
    ll a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    if(a[0]==a[n-1]){
        std::cout<<"NO"<<"\n";
    }
    else{
        std::cout<<"YES"<<"\n";
        s[1]='B';
        std::cout<<s<<"\n";
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

