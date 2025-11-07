#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m; 

    vector<int> a(n + 1);

    int ones=0, negs=0;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        if (a[i]== 1) ++ones;
        else ++negs;
    }

    while(m--){
        int l, r;
        cin>>l>>r;
        int len=r-l+1;

        if (len%2==0 && ones>=len/2 && negs>=len/2) 
            cout<<1<<endl;
        else 
            cout<<0<<endl;
    }


    return 0;
}