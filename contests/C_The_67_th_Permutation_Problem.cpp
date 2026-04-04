#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        
        for(int i = 0; i < n; i++){
            int first= i + 1;
            int median = n + 1 + 2 * i;
            int maxi   = n + 2 + 2 * i;
            
            cout <<first<< " " << median << " " << maxi;
            if(i<n-1) cout << " ";
        }
        cout <<endl;
    }

    return 0;
}