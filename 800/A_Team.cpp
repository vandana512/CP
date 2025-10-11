#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int ans=0;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int cnt=0;

        if(a==1) cnt++;
        if(b==1) cnt++;
        if(c==1) cnt++;

        if(cnt>1) ans++;
    }

    cout<<ans<<endl;

    return 0;
}
