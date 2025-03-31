#include<bits/stdc++.h>
using ll = long long;

void solve (){
    ll n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ans++;
        }
        else{
            ans--;
        }
    }
    if(ans>=0){
        ans++;
    }
    else{
        ans--;
    }
    // std::cout<<ans<<"\n";
    if(ans>=0){
        if(ans%4==1){
            std::cout<<'E'<<"\n";
        }
        else if(ans%4==2){
            std::cout<<'N'<<"\n";
        }
        else if(ans%4==3){
            std::cout<<'W'<<"\n";
        }
        else{
            std::cout<<'S'<<"\n";
        }
    }
    else{
        ans=abs(ans);
        if(ans%4==1){
            std::cout<<'E'<<"\n";
        }
        else if(ans%4==2){
            std::cout<<'S'<<"\n";
        }
        else if(ans%4==3){
            std::cout<<'W'<<"\n";
        }
        else{
            std::cout<<'N'<<"\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;
    while(t--)
    solve();
}