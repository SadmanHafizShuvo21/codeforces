#include<bits/stdc++.h>
using ll = long long;

void solve(){
    int n,q;
    std::cin>>n>>q;
    std::multiset<int>s;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        s.insert(x);
    }
    while(q--) {
        int type, x;
        std::cin>>type;

        if (type==0) {
            std::cin >> x;
            s.insert(x);
        } 
        else if (type==1) {
            std::cout<<*s.begin()<<'\n';
            s.erase(s.begin());
        } 
        else{
            auto it=std::prev(s.end());
            std::cout<<*it<< '\n';
            s.erase(it);
        }
    } 
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}