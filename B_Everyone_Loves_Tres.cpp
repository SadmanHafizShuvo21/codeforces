#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    if(n==1 || n==3){
        std::cout<<-1<<"\n";
        return;
    }
    std::string s,s1="36366";
    if(n%2==0){
        for(int i=0;i<n-2;i++){
            s.push_back('3');
        }
        s+="66";
    }
    else{
        for(int i=0;i<n-5;i++){
            s.push_back('3');
        }
        s+=s1;
    }
    std::cout<<s<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}