#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void th(int n, int L, int R, int M){
    if(n==1){
        cout<<L<<' '<< R<<endl;
        return;
    }

    // shift n-1 disks from l->m via r
    th(n-1, L, M, R);

    // shift largest from l->r
    cout<<L<<" "<<R<<endl;

    //shift n-1 disks from m->r via l
    th(n-1, M, R, L);
}

void solve() {
    int n;
    cin>>n;
    int L=1;
    int M=2;
    int R=3;

    // 1 left shift n, it means multiplying the number by 2 n times
    cout<< (1 << n) -1<<endl;
    th(n, L, R, M);

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