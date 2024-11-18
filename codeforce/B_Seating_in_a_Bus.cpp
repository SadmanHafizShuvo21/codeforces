//13 Aug 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    int f=a[0],l=a[0];
    bool ok=true;
    for(int i=1;i<n;i++){
        if(a[i]==f-1){
            f--;
        }
        else if(a[i]==l+1){
            l++;
        }
        else{
            ok=false;
            break;
        }
    }
    if(ok){
        std::cout<<"YES"<<'\n';
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();

    return 0;
}
