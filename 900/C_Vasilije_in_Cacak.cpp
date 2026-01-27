#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;

        long long minsum=k*(k+1)/2;
        long long maxsum=(n*(n+1)/2)-((n-k)*(n-k+1)/2);


        if(x>=minsum && x<=maxsum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    
    }

    return 0;
}