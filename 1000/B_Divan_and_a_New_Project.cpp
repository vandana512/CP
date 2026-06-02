#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);

    for(int i=0; i<n; i++) cin>>a[i];

	vector<pair<ll, ll>>map;
	for (int i = 0; i < n; i++)
		map.push_back({a[i], i});

	sort(map.rbegin(), map.rend());

	vector<ll> ans(n+1, 0);

	ans[0]=0;

	ll minutes = 0; 
	ll coordinate = 1; 
	for(int i=0; i < n; i++){
		ans[map[i].second + 1] = coordinate;

		minutes += (2 * abs(coordinate) * map[i].first);
		if (coordinate < 0)
			coordinate = abs(coordinate) + 1;
		else
			coordinate = -coordinate;
		}

		cout << minutes << endl;
		for (auto it : ans)
			cout << it << " ";

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