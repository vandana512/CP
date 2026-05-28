#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t=1;
    cin>>t;
    while (t--){
        ll n, p;
        cin>>n>>p;

        vector<pair<ll, ll>> v(n);
        vector<ll> a(n), b(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        for(int i=0; i<n; i++){
            v[i] = {b[i], a[i]};
        }

        sort(v.begin(), v.end());

        ll min_cost=p; // atleast inform 1 person
        ll shared=1;

        for(auto it: v){
            ll people=it.second;
            ll cost=it.first;

            if(shared==n) break;

            if(cost >= p) break; //if cost jyada h to break out of loop and and sabko direct share krdega wo

            //take min of left people and people who can share
            ll take= min(people, n-shared);

            min_cost+= take*cost;

            shared+=take;
        }

        //left people with higher cost are directly shared
        min_cost+= (n-shared)*p;
 
        cout<<min_cost<<endl;
        
    }

    return 0;
}