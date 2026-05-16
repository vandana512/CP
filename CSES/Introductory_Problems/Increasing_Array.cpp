#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

// we should also update the values after addding ans
void solve() {
    ll n=1;
    cin >> n;

    vector<ll> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    ll ans=0;

    for(int i=1; i<n ; i++){
        ans+= max((a[i-1]-a[i]), 1LL*0);
        if(a[i-1] > a[i]) a[i]=a[i-1];
    }

    cout<< ans<< endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}