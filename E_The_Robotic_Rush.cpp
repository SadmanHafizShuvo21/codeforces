// 21 Jan 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m, k;
    std::cin >> n >> m >> k;

    std::vector<ll> a(n); 
    for (ll i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::set<ll> s;  
    for (ll i = 0; i < m; i++) {
        ll x;
        std::cin >> x;
        s.insert(x);
    }

    std::sort(a.begin(), a.end());
    std::map<ll, std::vector<ll>> mp;
    for(int i = 0; i < n; i++){
		auto it = s.upper_bound(a[i]);
		if(it != s.end()) {
            mp[*it - a[i]].push_back(i);
        }
		if(it != s.begin()) {
            mp[*prev(it) - a[i]].push_back(i);
        }
	}

    std::string str;
    std::cin >> str;

    ll cnt = 0, alive = n;
    std::vector<ll> death(n, 1), ans;
    for (int i = 0; i < k; i++) {
        cnt += (str[i] == 'L' ? -1 : 1);
        for(int j : mp[cnt]){
			alive -= death[j];
			death[j] = 0;
		}
        mp[cnt].clear();
        ans.push_back(alive);
    }

    for (int i = 0; i < k; i++) {
        std::cout << ans[i] << " \n"[i == k - 1];
    }
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