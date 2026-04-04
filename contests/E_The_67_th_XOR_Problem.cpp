#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        
        long long ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                ans = max(ans, (long long)(a[i] ^ a[j]));
            }
                
        }
            
        
        cout << ans << "\n";
    }
    return 0;
}