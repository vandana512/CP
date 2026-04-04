#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // sieve for prime numbers
    vector<bool> is_prime(200000+1, true);

    is_prime[0]=is_prime[1]=false;

    for(int i=2; i*i<=200000; i++){
        if(is_prime[i]){
            for(int j = i*i; j <=200000; j += i){
                is_prime[j] = false;
            }
        }
    }
        
    vector<long long> primes;
    for(int i=2; i <=200000; i++){
        if(is_prime[i]){
            primes.push_back(i);
        } 
    }
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        cout << primes[0];

        for(int i=1; i<n; i++){

            long long val=primes[i-1]*primes[i];
            cout << " " << val;
        }
        cout << endl;
    }
    
    return 0;
}