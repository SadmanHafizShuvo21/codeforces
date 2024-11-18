//04 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string s;
    std::cin>>s;
    int k=s.size();
    for(int i=0;i<k-1;i++){
        if(int(s[i]+1)!=int(s[i+1]) && (s[i]!='z' && s[i+1]!='a')){
            std::cout<<"NO"<<"\n";
            return;
        }
    }
    std::cout<<"YES"<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


