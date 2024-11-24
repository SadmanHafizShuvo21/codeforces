// 15 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::string a,b;
    std::cin>>a>>b;
    int ans=1,count=n;
    for(int i=1;i<n;i++){
        if(a[i]==b[i-1]){
            ans++;
        }
        else if(a[i]>b[i-1]){
            count=i;
            break;
        }
        else{
            ans=1;
        }
    }
    for(int i=0;i<count;i++){
        std::cout<<a[i];
    }
    for(int i=count-1;i<n;i++){
        std::cout<<b[i];
    }
    std::cout<<"\n";
    std::cout<<ans<<"\n";
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