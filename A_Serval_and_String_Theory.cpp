#include<bits/stdc++.h>
using ll = long long;

void solve(){
    ll n,k;
    std::cin>>n>>k;
    std::string s,r,srt;
    std::cin>>s;
    r=s,srt=s;
    std::sort(srt.begin(),srt.end());
    std::reverse(r.begin(),r.end());
    std::cout<<s<<" "<<r<<" "<<srt<<"\n";

    if(r>s || (s>srt && k>0)){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}