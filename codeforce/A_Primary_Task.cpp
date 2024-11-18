//13 Aug 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    std::string s;
    std::cin>>s;
    if(s.size()>=3 && s.substr(0,2)=="10" && s[2]!='0' && std::stoi(s.substr(2))>=2){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();

    return 0;
}
