//17 Dec 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string s;
    std::cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='q'){
            s[i]='p';
        }
        else if(s[i]=='p'){
            s[i]='q';
        }
    }
    std::reverse(s.begin(), s.end());
    std::cout<<s<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

