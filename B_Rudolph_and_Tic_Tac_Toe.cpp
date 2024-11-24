//19 June 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    std::string s,s1,s2;
    std::cin>>s>>s1>>s2;
    for(int i=0;i<3;i++){
        if(s[i]==s1[i] && s1[i]==s2[i] && s[i]!='.'){
            std::cout<<s[i]<<"\n";
            return;
        }
    }
    if(s[0]==s[1] && s[1]==s[2] && s[0]!='.'){
        std::cout<<s[0]<<"\n";
    }
    else if(s1[0]==s1[1] && s1[1]==s1[2] && s1[0]!='.'){
        std::cout<<s1[0]<<"\n";
    }
    else if(s2[0]==s2[1] && s2[1]==s2[2] && s2[0]!='.'){
        std::cout<<s2[0]<<"\n";
    }
    else if(s[0]==s1[1] && s1[1]==s2[2] && s[0]!='.'){
        std::cout<<s[0]<<"\n";
    }
    else if(s[2]==s1[1] && s1[1]==s2[0] && s[2]!='.'){
        std::cout<<s1[1]<<"\n";
    }
    else{
        std::cout<<"DRAW"<<"\n";
    }
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