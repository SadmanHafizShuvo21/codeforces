#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    set<ll> st;
    
    for (ll i = 0; i < n; i++) {
        if (a[i] == 0) continue;
        ll hb = 63 - __builtin_clz(a[i]); // highest set bit
        st.insert(hb);
    }
    
    cout << st.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
