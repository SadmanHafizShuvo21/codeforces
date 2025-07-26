#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n+1), b(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    // build M: ones at even positions
    for(int i=1;i<=n;i++){
        b[i] = (i%2==0);
    }
    // if M != a, done
    if(!equal(a.begin()+1, a.begin()+n+1, b.begin()+1)){
        for(int i=1;i<=n;i++) cout << b[i] << ' ';
        cout << "\n";
        return;
    }
    // a == M
    if(n==1){
        cout << -1 << "\n";
        return;
    }
    if(n==2){
        cout << "0 0\n";
        return;
    }
    // n>=3: move the 1 from pos 2 → pos 3
    b[2] = 0;
    b[3] = 1;
    for(int i=1;i<=n;i++) cout << b[i] << ' ';
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}
