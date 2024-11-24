//19 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,count=0;
    std::string s;
    std::cin>>n>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
            i++;
        }
    }
    std::cout<<n-count<<"\n";
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