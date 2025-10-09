#include <bits/stdc++.h>
using namespace std;

// -------------------------------
// ⚡ SPEED + SHORTCUTS
// -------------------------------
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long          // use 64-bit integers
#define endl '\n'              // faster line breaks

// -------------------------------
// 📚 COMMON MACROS
// -------------------------------
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second
#define vi vector<int>
#define pii pair<int, int>

// -------------------------------
// 🧩 DEBUG HELPER (optional)
// -------------------------------
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

// -------------------------------
// 🚀 SOLVE FUNCTION
// -------------------------------
void solve() {
    // write your logic here
    int n;
    cin >> n;

    // sample example
    if (n > 2 && n % 2 == 0) cout << "YES";
    else cout << "NO";
}

// -------------------------------
// 🏁 MAIN FUNCTION
// -------------------------------
int32_t main() {
    fast_io;

    int t = 1;
    // cin >> t;  // uncomment this line if multiple test cases
    while (t--) {
        solve();
    }

    return 0;
}
