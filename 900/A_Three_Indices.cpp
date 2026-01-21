#include<bits/stdc++.h>
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

        bool isPalin=false;
        for(int i=0; i<n-2; i++){
            if(a[i]<a[i+1] && a[i+1]>a[i+2]){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2 << " " <<i+3<<endl;
                isPalin=true;
                break;
            }
        }

        if(!isPalin){
            cout<<"NO"<<endl;
        }
    }


    return 0;
}