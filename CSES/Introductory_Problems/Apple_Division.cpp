#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

ll mn=LLONG_MAX;

void f(vector<ll> &a, int i, ll g1, ll g2){
    if(i==a.size()){
        mn= min( abs(g1-g2), mn);
        return;
    }

    f(a, i+1, g1+ a[i], g2);
    f(a, i+1, g1, g2+a[i]);

}

void solve() {
    int n;
    cin>>n;

    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll g1=0, g2=0;
    int n1=0, n2=0;

    f(a, 0 ,g1, g2);

    cout<<mn<<endl;
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