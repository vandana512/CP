#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n+1);
        
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        
        bool flag=true;
        

        int num=0;
        while(num<20){
            for(int i=1; i<=n/2; i++){
                if(a[i]>a[2*i]){
                    swap(a[i], a[2 * i]);
                }
            }
            num++;
        }
        
        
        for(int i=1; i<=n; i++){
            if(a[i]!=i){
                flag=false;
                break;
            }
        }
        
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}