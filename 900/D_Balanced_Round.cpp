#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while (t--){
        long long n,k;
        cin>>n>>k;

        vector<long long> a(n);
        for(int i=0; i<n ; i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        long long max_len=1;
        long long len=1;
        for(int i=0; i<n-1; i++){
            if(a[i+1]-a[i]<=k){
                len++;
            }
            else{
                len=1;
            }
            max_len=max(max_len, len);
        }


        cout<<n-max_len<<endl;
        

    }


    return 0;
}
