#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int max0=0;
        int len=0;

        for(int i=0; i<n; i++){
            if(a[i]==0){
                len++;
                max0=max(len, max0);
            }else{
                
                len=0;
            }
        }

        cout<<max0<<endl;
    }

    return 0;
}