#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while (t--){
        int n;
        cin>>n;

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int even=0;
        int odd=0;
        int cnt=0;

        for(int i=0; i<n; i++){
            if(a[i]%2==0){
                if(even>1){
                    cnt++;
                    odd=0;
                }
                even++;
            }
            else{
                if(odd>1){
                    cnt++;
                    even=0;
                }
                odd++;
            }
        }

        cout<<cnt<<endl;
    }


    return 0;
}