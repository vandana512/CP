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


        vector<int> freq(n+1,0);
        int ans=0;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            freq[x]++;
        }

        for(int i=0; i<=n; i++){
            if(freq[i]==0){
                continue;
            }

            if(i==0){
                ans+=freq[i];
            }
            else if(freq[i]>=i){
                ans+=freq[i]-i;
            }
            else{
                ans+=freq[i];
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}