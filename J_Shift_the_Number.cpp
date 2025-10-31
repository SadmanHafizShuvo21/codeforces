#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n; 
        cin >> n;
        string s = to_string(n);
        int m = (int)s.size();

        // Precompute powers of 10 up to m
        vector<long long> p10(m + 1, 1);
        for (int i = 1; i <= m; ++i) p10[i] = p10[i - 1] * 10LL;

        vector<long long> xs;
        for (int k = 1; k <= m - 1; ++k) {
            long long low = n % p10[k];            // last k digits
            long long high = n / p10[k];           // leading m - k digits
            long long Rk = low * p10[m - k] + high;

            long long delta = Rk - n - k;
            if (delta >= 0 && delta % m == 0) {
                long long x = k + delta;           // equals Rk - n
                xs.push_back(x);
            }
        }
        sort(xs.begin(), xs.end());

        cout << xs.size() << "\n";
        if (!xs.empty()) {
            for (size_t i = 0; i < xs.size(); ++i) {
                cout << xs[i] << (i + 1 == xs.size() ? '\n' : ' ');
            }
        } else {
            cout << "\n";
        }
    }
    return 0;
}
