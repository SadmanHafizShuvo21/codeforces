// #include <bits/stdc++.h>
// using ll = long long;

// void solve(){
//     ll x,y,k;
//     std::cin>>x>>y>>k;
//     x=(x+k-1)/k;
//     y=(y+k-1)/k;
//     std::cout<<std::max(2LL*x-1,2LL*y)<<"\n";
// }
// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     int t;
//     std::cin>>t;
//     while(t--)
//     solve();
// }
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        
        // Calculate the minimum number of jumps required for x and y
        long long jumps_x = (x + k - 1) / k;  // Equivalent to ceil(x / k)
        long long jumps_y = (y + k - 1) / k;  // Equivalent to ceil(y / k)
        
        // The total number of jumps is the maximum of jumps_x and jumps_y,
        // but we need to ensure that the difference between jumps_x and jumps_y is at most 1
        long long total_jumps = max(2LL*jumps_x-1,2LL*jumps_y);
        
        cout << total_jumps << endl;
    }
    return 0;
}