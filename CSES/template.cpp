#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll binpow(ll a, ll b) {
    ll res = 1;

    while (b) {
        if (b & 1)
            res *= a;

        a *= a;
        b >>= 1;
    }

    return res;
}