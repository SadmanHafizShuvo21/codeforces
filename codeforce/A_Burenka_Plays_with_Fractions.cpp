//04 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll a,b,c,d,x,y;
    std::cin>>a>>b>>c>>d;
     x=a*d;
     y=b*c;
    if(x == y){
        std::cout<<0<<"\n";
    }
    else if((y!=0 && x%y==0) || (x!=0 && y%x==0)){
        std::cout<<1<<'\n';
    }
    else{
        std::cout<<2<<'\n';
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

