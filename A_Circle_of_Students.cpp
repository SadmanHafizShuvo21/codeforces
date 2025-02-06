#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n,pos=-1;
    std::cin>>n;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        if(a[i]==1){
            pos=i;
        }
    }
    // std::cout<<pos<<"\n";
    bool cw=true,antiCw=true;
    for(int i=1;i<n;i++){
        if (a[(pos + i) % n] != i + 1) {
            cw = false;
            break;
        }
    }
    for(int i=1;i<n;i++){
        if(a[(pos-i+n)%n] != i+1){
            antiCw=false;
            break;
        }
    }
    if(cw==true || antiCw==true){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}