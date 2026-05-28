#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin>>n;

    for(int k=1; k<=n; k++){
        if(k==1){
            cout<<0<<endl;
        }

        else{
            //total position is k2 C 2 or k2(k2-1)/2
            ll cells= k*k;
            ll total= (cells) * (cells -1)/2;

            // for unsafe we calculate the number of 2*3 and 3*2 slabs and each slabs contribute 2 unsafe positions
            //and when we find out, there can be (k-1)(k-1) 2*3 slabs, and *2 as 3*2 is also symmetrical and each contribute 2 unsafe postions
            ll unsafe= 2*2*(k-1)*(k-2);

            cout<<total-unsafe<<endl;
        }
        
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