#include <bits/stdc++.h>
using ll = long long;

void solve(){
    std::string s;
    std::cin>>s;
    int n=s.size();
    int k=s.find('0');
    if(k==std::string::npos){
        std::cout<<1<<" "<<n<<" "<<n<<" "<<n<<"\n";
        return;
    }
    int l=n-k;
    int p=s.substr(k).find('1');
    if(p==std::string::npos){
        k=0;
    }
    else{
        k=std::max(k-p,0);
    }
    std::cout<<1<<" "<<n<<" "<<k+1<<" "<<k+l<<"\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
