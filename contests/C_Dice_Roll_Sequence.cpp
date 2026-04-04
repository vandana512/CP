#include <bits/stdc++.h>
using namespace std;

bool adj(int a, int b){
    return a!=b && a+b!=7;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        int change=0;
        
        for (int i=1; i<n; i++) {

            if (!adj(a[i-1], a[i])) {
                change++;
                
                bool found=false;
                
                for(int val=1; val<=6; val++){
                    if (adj(a[i-1], val)) {
                        
                        if(i==n-1 || adj(val, a[i+1])){
                            a[i]=val;
                            found=true;
                            break;
                        }
                    }
                }
                
                if (!found) {
                    for (int val=1; val<=6; val++) {
                        if (adj(a[i-1], val)) {
                            a[i]=val;
                            break;
                        }
                    }
                }
            }
        }
        
        cout<<change<<"\n";
    }
    
    return 0;
}