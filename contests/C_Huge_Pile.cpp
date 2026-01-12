#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if (k > n) {
        cout << -1 << endl;
        return;
    }
    
    if (n == k) {
        cout << 0 << endl;
        return;
    }

    set<long long> visited;
    vector<long long> current_level;
    
    current_level.push_back(n);
    visited.insert(n);
    
    int minutes = 0;
    
    while (!current_level.empty()) {
        minutes++;
        vector<long long> next_level;
        
        for (long long x : current_level) {
            // Calculate child piles
            long long a = x / 2;           // floor(x/2)
            long long b = (x + 1) / 2;     // ceil(x/2)
            
            if (a == k || b == k) {
                cout << minutes << endl;
                return;
            }
            
            if (a > 0 && visited.find(a) == visited.end()) {
                visited.insert(a);
                next_level.push_back(a);
            }
            if (b > 0 && visited.find(b) == visited.end()) {
                visited.insert(b);
                next_level.push_back(b);
            }
        }
        
        current_level = next_level;
    }

    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}