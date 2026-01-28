#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i=0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> suffix(n);
        suffix[n - 1] = p[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(p[i], suffix[i + 1]);
        }

        int l = -1;
        for (int i = 0; i < n; i++) {
            if (p[i] < suffix[i]) {
                l = i;
                break;
            }
        }

        if (l == -1) {
            for (int x : p) cout << x << " ";
            cout << "\n";
            continue;
        }

        int target = suffix[l];
        int r = l;
        for (int i = n - 1; i > l; i--) {
            if (p[i] == target) {
                r = i;
                break;
            }
        }

        reverse(p.begin() + l, p.begin() + r + 1);

        for (int x : p){
            cout << x << " ";
        } 
        cout << "\n";
    }

    return 0;
}
