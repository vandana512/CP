#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        long long n,a;
        cin>>n>>a;

        vector<long long> v(n);

        long long small=0, more=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(a>v[i]) small++;
            if(a<v[i]) more++;
        }

        

        if(small>more){
            cout<<a-1<<endl;
        }else{
            cout<<a+1<<endl;
        }

        
    }


    return 0;
}