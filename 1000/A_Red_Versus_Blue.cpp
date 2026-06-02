#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, r, b;
    cin>>n>>r>>b;

    int grps=b+1;

    int base=r/grps;
    int extra=r%grps;

    string ans;

    for(int i=0; i<grps; i++){
        int cnt=base;

        if(extra>0){
            cnt++;
            extra--;
        }

        ans+=string(cnt, 'R');

        if(i<b) ans += 'B';
    }

    cout << ans << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}