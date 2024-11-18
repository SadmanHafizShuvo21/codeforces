//22 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,cnt1=0,cnt2=0;
    std::string s;
    std::cin>>n>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]=='0' && s[i+1]=='1'){
            cnt1++;
        }
        if(s[i]=='1' && s[i+1]=='0'){
            cnt2++;
        }
    }
    std::cout<<std::max(cnt1,cnt2)<<"\n";
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



