#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    unordered_map<int, int> maxa, maxb;

    // longest consecutive segment in a
    int cnt = 1;

    for(int i=0; i<n; i++){

        cnt=1;
        while(i+1<n && a[i]==a[i+1]) {
            cnt++;
            i++;
        }
        maxa[a[i]] = max(maxa[a[i]], cnt);
    }

    // longest consecutive segment in b
    for(int i=0; i<n; i++){

        cnt = 1;
        while (i + 1 < n && b[i] == b[i + 1]) {
            cnt++;
            i++;
        }
        maxb[b[i]] = max(maxb[b[i]], cnt);
    }

    int ans = 0;

    for (int i = 1; i <= 2 * n; i++) {
        ans = max(ans, maxa[i] + maxb[i]);
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