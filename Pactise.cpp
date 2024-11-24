#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() {
    // std::string T,P;
    // std::cin>>T>>P;
    // int S = T.size();
    // int R = P.size();
    // int cnt=0;
    // for (int i = 0; i <= S - R; i++) {
    //     int j;
    //     for (j = 0; j < R; j++) {
    //         cnt++;
    //         if (T[i + j] != P[j]) {
    //             break;
    //         }
    //     }
    //     if (j == R) {
    //         // cout << "Pattern found at index " << i << endl;
    //         break;
    //     }
    // }
    // cout<<cnt<<"\n";
    int n;
    std::cin>>n;
    std::map<int,int>mp;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        mp[a[i]]++;
    }
    for(auto &it : mp){
        cout<<it.first<<" "<<it.second<<"\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();

    return 0;
}