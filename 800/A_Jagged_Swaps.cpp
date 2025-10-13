#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        // if(copy==a){
        //     cout<<"YES"<<endl;
        // }

        // ye bhot fudu sa qn tha isme sare places swap hoskte hai except 1 to agar 0th place pe 1 hoga to kaam set otherwise nhi ho payega as simple as that
        if (a[0] == 1) 
            cout << "YES" << endl; 
        else
            cout << "NO" << endl; 
        
        // else{
        //     for(int i=1; i<n-1; i++){
        //         if(a[i-1]<a[i] && a[i]>a[i+1]){
        //             isPer=true;
        //         }else{
        //             isPer=false;
        //         }
        //     }

        //     if(isPer){
        //         cout<<"YES"<<endl;
        //     }else{
        //         cout<<"NO"<<endl;
        //     } 
        // }
    }
    return 0;
}