#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string a, b;
    cin>>a>>b;
    int l1=a.size();
    int l2=b.size();
    
    int dp[l1+1][l2+1];
    memset(dp, 0, sizeof(dp));

    int mx=0;

    for(int i=1; i<=l1; i++){
        for(int j=1; j<=l2; j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            if(a[i-1] == b[j-1]){
                dp[i][j]= 1+ dp[i-1][j-1];
                mx= max(mx, dp[i][j]);
            }
            else dp[i][j]=0;
        }
    }

    cout<<l1+l2- 2*mx<<endl;
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