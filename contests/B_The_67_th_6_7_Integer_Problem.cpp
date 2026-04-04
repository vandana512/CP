#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        int a[7];
        int sum = 0;
        int mx = -1000;

        for(int i = 0; i < 7; i++) {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }

        int ans=2*mx - sum;
        cout << ans << endl;
    }

    return 0;
}