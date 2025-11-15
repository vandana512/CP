#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int even=0;
        int odd=0;

        for(int i=0; i<n; i++){
            if(a[i]%2==1){
                odd++;
            }else{
                even++;
            }
        }
        
        if(even%2==1 && odd%2==1){
            cout<<"NO"<<endl;
        }
        else if(even%2==1 || odd%2==0){
            cout<<"YES"<<endl;
        }
        else if(even%2==0 && odd%2==1){
            cout<<"NO"<<endl;
        }
        else if(even%2==0 || odd%2==0){
            cout<<"YES"<<endl;
        }
    
    }
    
    return 0;
}