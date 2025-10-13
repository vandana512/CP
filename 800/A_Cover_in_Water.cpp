#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        bool has3=false;
        long long cnt=0;

        for(int i=0; i<n; i++){
            //agar 3 sath me hai to pura solve krne me bas 2 lagega but agar 3 sath me nahi hai to number of . is the answer
            if(i<n-2 && s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                cout<<2<<endl;
                //isme we use has true isliye kyuki hame print krne ke liye jarurat hai, kyuki isme return and all to ham kar hi nhi sakte
                has3=true;
                break;
            }else if(s[i]=='.'){
                cnt++;
            }
        }
        if(!has3) cout<<cnt<<endl;
    }
    return 0;
}