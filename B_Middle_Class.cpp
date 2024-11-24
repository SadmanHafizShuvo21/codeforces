//14 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,x,ans=0;
    std::cin>>n>>x;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    double sum=0.0,avr=0.0; 
    for(int i=n-1;i>=0;i--){
        sum+=a[i];
        avr = sum/(double(n-i));
        if(avr>=x){
            ans++;
        }
        else{
            break;
        }
    }
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