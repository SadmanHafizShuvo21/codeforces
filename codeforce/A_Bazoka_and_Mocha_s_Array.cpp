//26 May 2024
#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        bool ok=true;
        for(int j=1;j<n;j++){
            if(a[j-1]>a[j]){
                ok=false;
            }
        }
        if(ok){
            flag=true;
            break;
        }
        std::rotate(a,a+1,a+n);
    }
    std::cout<<(flag?"Yes":"No")<<"\n";
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