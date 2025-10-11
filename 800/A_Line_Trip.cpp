#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, x;
        cin>>n>>x;
        long long ans=0;

        vector<long long> gas(n);
        for (int i=0; i<n; i++) {
            cin >> gas[i]; 
        }
        
        //in this qn we have to consider the gap between evry station, be it from 0->gas[0] and distance between stations. and also last wale me 2*(x-gas[n-1]) lenge, isko dusre method se bhi krskte hai jisme vector me hi 0 and x daal de, but this is also correct only.
        
        long long gap=gas[0];

        for(int i=0; i<n; i++){
            if(i==n-1){
                long long tail=2*(x-gas[i]);
                gap=max(tail,gap);
                if(n==1){
                    gap=max(gap, gas[i]);
                }
            }else{
                gap=max(gas[i+1]-gas[i] , gap);
            }
        }

        cout<<gap<<endl;

    }
    return 0;
}