#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(n==1){
            cout<<0<<endl;
            continue;
        }
        
        int cnt2=0, cnt3=0;

        while(n%2==0){
            cnt2++;
            n/=2;
        }

        while(n%3==0){
            cnt3++;
            n/=3;
        }

        if(n!=1 || cnt2>cnt3 ){
            cout<<-1<<endl;
        }
        else{
            cout<<cnt3-cnt2+cnt3<<endl;
        }
    
    }

    return 0;
}