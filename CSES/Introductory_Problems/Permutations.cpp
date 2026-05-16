#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    ll n=1;
    cin >> n;

    if(n==1){
        cout<<1<<" ";
        return;
    }

    if(n==4){
        cout<< 2<<" " << 4<<" "<<  1<<" " << 3;
        return;
    }

    if(n<=3){
        cout<<"NO SOLUTION"<<endl;
        return;
    }

    for(int i=n-1; i>0; i-=2){
        cout<<i<<" ";
    }

    for(int i=n; i>0; i-=2){
        cout<<i<<" ";
    }
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
