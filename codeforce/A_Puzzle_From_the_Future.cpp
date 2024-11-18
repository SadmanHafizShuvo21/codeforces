//19 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::string s,a="1";
    std::cin>>n>>s;
    for(int i=1;i<n;i++){
        if('1'+s[i]!=a[i-1]+s[i-1]){
            a+='1';
        }
        else{
            a+='0';
        }
    }
    std::cout<<a<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}