#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long int n;
        cin>>n;
        vector<long long int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int j=0;j<58;j++){
            set<long long> s;

            for(int i=0;i<n;i++){
                s.insert((a[i]%(1LL<<j)));
            }

            if(s.size()==2){
                cout<<(1LL<<j)<<endl;
                break;
            }
        }

    }
    
    return 0;
}