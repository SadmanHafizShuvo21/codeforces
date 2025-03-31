#include<bits/stdc++.h>
using ll = long long;

void solve (){
    ll n;
    std::cin>>n;
    std::string s,s1="ESWN";
    std::cin>>s;
    ll count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count++;
        }
        else{
            count--;
        }
    }
    ll i = (count%4+4)%4;
    std::cout<<s1[i]<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin>>t;
    while(t--)
    solve();
}