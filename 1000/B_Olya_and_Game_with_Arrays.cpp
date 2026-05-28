#include <bits/stdc++.h>
using namespace std;
#define ll long long

/* here we will find out min1 and min2 of all arrays, and as we can remove from one array and give it to any array so we can add all min 2 and remove smallest min2 and add smallest min1 this will result in max sum */
void solve(){
    int n;
    cin>>n;

    vector<int> min1(n);
    vector<int> min2(n);

    for(int i=0; i<n; i++){
        int m;
        cin>>m;

        vector<int> a(m);

        for(int i=0; i<m; i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        min1[i]=a[0];
        min2[i]=a[1];
        
    }
    
    sort(min2.begin(), min2.end());
    sort(min1.begin(), min1.end());

    ll sum=accumulate(min2.begin(), min2.end(), 0LL);

    cout<< sum+min1[0]-min2[0] <<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin>>t;
    while (t--){
        solve();
    }

    return 0;
}