#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int simulations = 1000;
    int rounds = 10;
    double winProb = 0.5;
    ll initialMoney = 10;
    ll bet = 10;

    // Proper random seed
    mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
    uniform_real_distribution<double> dist(0.0, 1.0);

    ll totalFinalMoney = 0;
    int bankruptCount = 0;

    for (int sim = 0; sim < simulations; sim++) {
        ll money = initialMoney;

        for (int r = 0; r < rounds; r++) {
            if (money < bet) {
                bankruptCount++;
                break;
            }

            double x = dist(rng);

            if (x < winProb)
                money += bet;
            else
                money -= bet;
        }

        totalFinalMoney += money;
    }

    cout << fixed << setprecision(4);
    cout << "Average money   : "
         << (double)totalFinalMoney / simulations << "\n";
    cout << "Bankruptcy prob: "
         << (double)bankruptCount / simulations << "\n";
}
