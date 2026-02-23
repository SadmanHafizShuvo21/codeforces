// 23 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n, m;
    std::cin >> n >> m;
	std::vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		ll x;
		std::cin >> x;
		a[i] = x % m;
	}

	std::sort(a.begin(), a.end());

	ll q;
	std::cin >> q;
	while(q--) {
		ll x;
		std::cin >> x;
		x %= m;

		ll tar = m - x, ans = 0;
		auto it = std::lower_bound(a.begin(), a.end(), tar);
		if (it != a.begin()) {
			ans = std::max(ans, *(it - 1) + x);
		}
		if (it != a.end()) {
			ans = std::max(ans, (a.back() + x) % m);
		}
		std::cout << ans << "\n";
	}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}