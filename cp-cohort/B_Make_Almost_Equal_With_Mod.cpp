#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        // Find the minimum bit position where adjacent differences differ
        // We look at differences between consecutive elements
        long long minDiff = LLONG_MAX;
        for (int i = 1; i < n; i++) {
            minDiff = min(minDiff, a[i] - a[i-1]);
        }
        
        // Find the highest bit set in minDiff
        // The answer is 2^(highest_bit + 1)
        long long k = 1;
        while (k <= minDiff) {
            k *= 2;
        }
        
        cout << k << "\n";
    }
    
    return 0;
}