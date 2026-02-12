#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> p(n), a(n);
        vector<int> arr(n+1);

        for(int i=0; i<n; i++){
            cin>>p[i];
            arr[p[i]]=i;
        }

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        bool flag=true;

        for(int i=1; i<n; i++){

            if(a[i]!=a[i-1]){

                if (arr[a[i]]<=arr[a[i-1]]){
                    flag=false;
                    break;
                }
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
