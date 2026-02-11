#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int N;
    ll D;
    if (!(cin >> N >> D)) return;
    vector<ll> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    multiset<ll> S;        // values in current window (sorted, allows duplicates)
    multiset<ll> gaps;     // adjacent differences between consecutive values in S
    auto add_gap = [&](ll g){ gaps.insert(g); };
    auto remove_gap = [&](ll g){
        auto it = gaps.find(g);
        if (it != gaps.end()) gaps.erase(it);
    };

    auto insert_val = [&](ll x){
        auto it = S.lower_bound(x); // first element >= x (successor position)
        bool has_succ = (it != S.end());
        bool has_pred = (it != S.begin());
        ll succ = 0, pred = 0;
        if (has_succ) succ = *it;
        if (has_pred) {
            auto itpred = it;
            --itpred;
            pred = *itpred;
        }
        if (has_pred && has_succ) {
            // pred and succ were adjacent before; remove their gap
            remove_gap(llabs(succ - pred));
        }
        if (has_pred) add_gap(llabs(x - pred));
        if (has_succ) add_gap(llabs(succ - x));
        S.insert(x);
    };

    auto erase_val = [&](ll x){
        auto it = S.find(x); // find one occurrence
        if (it == S.end()) return; // should not happen
        bool has_pred = (it != S.begin());
        auto itnext = it; ++itnext;
        bool has_succ = (itnext != S.end());
        ll pred = 0, succ = 0;
        if (has_pred) { auto itpred = it; --itpred; pred = *itpred; remove_gap(llabs(x - pred)); }
        if (has_succ) { succ = *itnext; remove_gap(llabs(succ - x)); }
        if (has_pred && has_succ) {
            // after removal, pred and succ become adjacent
            add_gap(llabs(succ - pred));
        }
        S.erase(it);
    };

    ll ans = 0;
    int L = 0;
    for (int R = 0; R < N; ++R) {
        insert_val(A[R]);
        // while invalid: min gap < D
        while (!gaps.empty() && *gaps.begin() < D) {
            erase_val(A[L]);
            ++L;
        }
        // Now window [L, R] is valid
        ans += (R - L + 1);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
