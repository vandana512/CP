#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n), b(n);

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    for(int i=n-1; i>=0; i--){
		if(b[i] > a[i]) {
			if(i+1 < n && a[i+1] > b[i])
                a[i] = a[i+1];
			else a[i] = b[i];
		}
		else if(i+1 < n && a[i+1] > a[i]) 
            a[i] = a[i+1];
	}

	vector<int> prefix(n, 0);
	prefix[0]=a[0];
	for(int i=1; i<n; i++) {
		prefix[i] =prefix[i-1] + a[i];
	}
 
	while(q--) {
		int l, r;
		cin >> l >> r;
		l--; r--;
		int right = 0;
		if(l-1 >= 0) right = prefix[l-1];
		cout << prefix[r]- right<< " ";
	}
		
    cout << endl;
    
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