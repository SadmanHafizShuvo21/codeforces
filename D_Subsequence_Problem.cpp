// 23 April 2026
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> a(n);
    std::map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        mp[-a[i]]+=a[i];
    }
    priority_queue<int>pq;
    ll sum = 0;
    for(auto x : mp) {
        if ( x.first >= 0) {
            break;
        }
        pq.push(x.second);
    }
    while (!pq.empty())
    {
       if(k==0)break;
       k--;
       sum+=pq.top();
       pq.pop();
    }
    
    std::cout << sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}