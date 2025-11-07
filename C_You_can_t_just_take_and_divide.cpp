#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN = 1113; // adjust if larger n is needed

vector<int> divisor_count;
vector<bool> isPrime;

void precompute(int n) {
    divisor_count.assign(n + 1, 0);
    for (int d = 1; d <= n; d++) {
        for (int m = d; m <= n; m += d) {
            divisor_count[m]++;
        }
    }
    // sieve for primality up to n (or up to max divisor count)
    int limit = n + 5;
    isPrime.assign(limit, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < limit; j += i)
                isPrime[j] = false;
        }
    }
}

void solve() {
    ll n;
    cin >> n;
    precompute((int)n);

    ll ans = 0;
    for (int x = 1; x <= n; x++) {
        if (x % 2 == 0) continue; // must be odd
        int d = divisor_count[x];
        if (d % 2 == 1 && isPrime[d]) ans++;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
