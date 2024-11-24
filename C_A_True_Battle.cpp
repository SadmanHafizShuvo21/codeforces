//23 Nov 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    s='1'+s+'1';
    if(s.find("11")==-1){
        std::cout<<"NO"<<"\n";
    }
    else{
        std::cout<<"YES"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

