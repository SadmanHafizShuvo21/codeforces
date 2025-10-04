#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<ll> A(n), B(m);
    for(int i=0;i<n;i++) cin >> A[i];
    for(int j=0;j<m;j++) cin >> B[j];

    ll sumA = accumulate(A.begin(), A.end(), 0LL);
    ll ans = 0;

    for(int j=0;j<m;j++){
        ll full = n / (j+1);
        ll rem = n % (j+1);
        ll sum_mod = full * (j*(j+1)/2LL) + rem*(rem+1)/2LL;
        ans += B[j] * sum_mod;
    }

    ans *= sumA;
    cout << ans << "\n";
}
