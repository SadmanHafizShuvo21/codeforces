#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n), q(n);
        for (int i = 0; i < n; ++i) cin >> p[i];
        for (int i = 0; i < n; ++i) cin >> q[i];
        vector<long long> pow2(n);
        pow2[0] = 1;
        for (int i = 1; i < n; ++i) {
            pow2[i] = (pow2[i-1] * 2) % MOD;
        }
        vector<long long> r(n);
        for (int i = 0; i < n; ++i) {
            long long max_sum = 0;
            for (int j = 0; j <= i; ++j) {
                long long sum = (pow2[p[j]] + pow2[q[i-j]]) % MOD;
                max_sum = max(max_sum, sum);
            }
            r[i] = max_sum;
        }

        for (int i = 0; i < n; ++i) {
            cout << r[i] << (i < n-1 ? " " : "\n");
        }
    }
    
    return 0;
}