#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int> cnt(n + 1, 0);
    for (int p = 2; p <= n; ++p) {
        if (cnt[p] == 0) { // p is prime
            for (int j = p; j <= n; j += p) {
                cnt[j]++;
            }
        }
    }

    int ans = 0;
    for (int i = 2; i <= n; i++){
        if (cnt[i] == 2)ans++;
    }

    cout<<ans<<endl;

    return 0;
}