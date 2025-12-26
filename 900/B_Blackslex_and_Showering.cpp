#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        long long total=0;
        for(int i=0; i<n-1; i++){
            total+=abs(a[i]-a[i+1]);
        }

        long long ans=total;

        //removing first
        ans=min(ans, total-abs(a[0]-a[1]));

        //removing last
        ans=min(ans, total-abs(a[n-2]-a[n-1]));

        //removing middle
        for(int i=1; i<n-1; i++) {
            long long curr = total - abs(a[i-1]-a[i]) - abs(a[i]-a[i+1]) + abs(a[i-1]-a[i+1]);
            ans=min(ans, curr);
        }

        cout << ans << endl;

    
    }

    return 0;
}