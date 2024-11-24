//14 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    int p=0,c=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        int x,y;
        std::cin>>x>>y;
        if(x<p || y<c || (y-c > x-p)){
            flag=false;
        }
        p=x;
        c=y;
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
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}