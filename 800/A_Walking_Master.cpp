#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin>>t;
    while (t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d<b) cout<<-1<<endl;
        else{
            int moves=d-b;
            a+=moves;
            if(a<c){
                cout<<-1<<endl;
            }else{
                moves+=a-c;
                cout<<moves<<endl;
            }
        }

    }

    return 0;
}