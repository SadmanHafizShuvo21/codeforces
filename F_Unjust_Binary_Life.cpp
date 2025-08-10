// #include <bits/stdc++.h>
// using ll = long long;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::string a, b;
//     std::cin >> a >> b;
//     a = " " + a;
//     b = " " + b;

//     std::vector<int> sa(n + 1, 0), sb(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         sa[i] = sa[i - 1] + (a[i] == '1');
//         sb[i] = sb[i - 1] + (b[i] == '1');
//     }

//     int r = 2 * n + 5, off = n;
//     std::vector<ll> c(r, 0), st(r, 0), sy(r, 0);
//     ll tt = 0, ty = 0;
//     for (int y = 1; y <= n; y++) {
//         int t = sb[y];
//         int d = 2 * t - y;
//         int idx = d + off;
//         c[idx]++;
//         st[idx] += t;
//         sy[idx] += y;
//         tt += t;
//         ty += y;
//     }
//     for (int i = 1; i < r; i++) {
//         c[i] += c[i - 1];
//         st[i] += st[i - 1];
//         sy[i] += sy[i - 1];
//     }

//     ll ans = 0;
//     for (int x = 1; x <= n; x++) {
//         int s = sa[x], z = x - s;
//         int thr = x - 2 * s;
//         int idx = thr + off;
//         if (idx < 0) idx = -1;
//         if (idx >= r) idx = r - 1;

//         ll lc = (idx >= 0 ? c[idx] : 0);
//         ll lt = (idx >= 0 ? st[idx] : 0);
//         ll ly = (idx >= 0 ? sy[idx] : 0);

//         ll rc = n - lc;
//         ll rt = tt - lt;
//         ll ry = ty - ly;

//         ans += lc * 1LL * s + lt + rc * 1LL * z + (ry - rt);
//     }

//     std::cout << ans << "\n";
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         solve();
//     }
// }

#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n; 
    std::cin >> n;
    std::string a, b; 
    std::cin >> a >> b;

    std::vector<int> pa(n + 1, 0), pb(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pa[i] = pa[i - 1] + (a[i - 1] == '1');
        pb[i] = pb[i - 1] + (b[i - 1] == '1');
    }

    std::vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = 2LL * pb[i + 1] - (i + 1);
    }

    std::sort(v.begin(), v.end());
    std::vector<ll> pre(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + v[i - 1];
    }

    ll last = pre[n];
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ll x = 2LL * pa[i] - i;
        ll thr = -x - 1;
        auto it = std::upper_bound(v.begin(), v.end(), thr);
        ll num = it - v.begin();
        ll add = (num ? pre[num] : 0);
        ll neg = num * x + add;
        ll psum = (ll)n * x + last;
        ll val = psum - 2LL * neg;
        ans += val;
    }

    ll sum = (ll)n * n * (n + 1);
    std::cout << (sum - ans) / 2 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
