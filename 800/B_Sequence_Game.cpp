#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> b(n);

        for(int i=0; i<n; i++){
            cin >> b[i];
        } 

        vector<long long> a;
        for(int i=0; i<n; i++){
            a.push_back(b[i]);
            if(i+1< n && b[i]>b[i+1]){
                a.push_back(b[i+1]);
            }
        }

        cout << a.size()<<endl;
        for(int i=0; i<a.size(); i++){
            if(i) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}