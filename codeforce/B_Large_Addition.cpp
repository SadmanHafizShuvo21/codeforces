//11 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string s;
    std::cin>>s;
    if(s[0]!='1'){
        std::cout<<"NO"<<"\n";
        return;
    }
    bool flag=true;
    for(int i=1;i<s.size();i++){
        char ch;
        ch=(i==s.size()-1)?'9':'0';
        if(s[i]==ch){
            flag=false;
            break;
        }
    }
    if(flag){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


