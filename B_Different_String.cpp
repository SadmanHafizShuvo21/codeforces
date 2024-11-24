//10 May 2024
#include<bits/stdc++.h>

void solve(){
    std::string s,s1,s2;
    std::cin>>s;
    int len = s.size();
    s1=s;
    s2=s;
    std::sort(s1.begin(),s1.end());
    std::sort(s2.rbegin(),s2.rend());
    if(s1!=s){
        std::cout<<"YES"<<'\n';
        std::cout<<s1<<"\n";
    }
    else if(s2!=s){
        std::cout<<"YES"<<'\n';
        std::cout<<s2<<"\n";
    }
    else{
        std::cout<<"NO"<<'\n';
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