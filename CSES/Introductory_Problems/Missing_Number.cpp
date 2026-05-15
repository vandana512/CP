#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    ll n;
    cin >> n;

    ll sum=0;

    for(int i=0; i<n-1; i++){
        ll x;
        cin >> x;
        sum += x;
    }

    ll total = 1LL * n * (n + 1) / 2;

    cout << total - sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;

    while (t--) {
        solve();
    }

    return 0;
}