//29 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    char ch;
    std::cin>>n>>ch;
    std::string s;
    std::cin>>s;
    s+=s;
    ll max=0,cnt=0;
    for(int i=0;i<2*n;i++){
        if(s[i]==ch){
            cnt=0;
            while(s[i]!='g' && i<2*n){
                cnt++;
                i++;
            }
            max=std::max(max,cnt);
        }
    }
    std::cout<<max<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

