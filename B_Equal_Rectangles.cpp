#include<bits/stdc++.h>
using ll = long long;


void solve(){
    ll n;
    std::cin>>n;
    std::vector<ll>a(4*n);
    for(int i=0;i<4*n;i++){
        std::cin>>a[i];
    }
    bool ok = true;
    std::map<int, int> freq;
    for (int stick : a) {
        freq[stick]++;
    }
 
    std::vector<int> lengths;
    for (auto& pair : freq) {
        if (pair.second % 2 != 0) {
            ok = false;
        }
        for (int i = 0; i < pair.second / 2; ++i) {
            lengths.push_back(pair.first);
        }
    }
 
    std::sort(lengths.begin(), lengths.end());
 
    int area = lengths[0] * lengths[lengths.size() - 1];
    for (int i = 1; i < lengths.size() / 2; ++i) {
        int currentArea = lengths[i] * lengths[lengths.size() - 1 - i];
        if (currentArea != area) {
            ok = false;
            break;
        }
    }
    
    std::cout<<(ok?"YES":"NO")<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}