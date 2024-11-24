//05 Aug 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    std::map<char,int>ch;
    for(int i=0;i<s.size();i++){
        if(s[i]!='?'){
            ch[s[i]-'A']++;
        }
    }
    int ans=0;
    for(int i=0;i<4;i++){
        ans+=std::min(n,ch[i]);
    }
    std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}
