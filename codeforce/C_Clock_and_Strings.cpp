//10 May 2024
#include<bits/stdc++.h>

void solve(){
    int a,b,c,d,cnt=0;
    std::cin>>a>>b>>c>>d;
    if(a>b){
        std::swap(a,b);
    }
    if(c>d){
        std::swap(c,d);
    }
    for(int i=a;i<b;i++){
        if(i==c || i==d){
            cnt++;
        }
    }
    if(cnt==1){
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