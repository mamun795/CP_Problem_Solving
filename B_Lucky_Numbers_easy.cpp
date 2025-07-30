#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    string s;cin>>s;
    ll n=s.size();
    ll ans=INT_MAX;
    ll p=stoi(s);
    if(p<47){
        cout<<47<<endl;
        return;
    }
    
    for(int i=0;i<((1<<n));i++){
         string temp;
        ll a=0,b=0;
        for(int j=0;j<n;j++){
            if( ( i & (1<<j) ) ){
                temp+='7';
                a++;
            }
            else{
                temp+='4';
                b++;
            }

        }
        ll t=stoi(temp);
        //cout<<t<<endl;
        if(t>=p && a==b){
            ans=min(ans,t);
        }

    }
    cout<<ans<<endl;
        
 }
    





int main()
{
    ll t;
    t=1;
   // cin>>t;
    while(t--)
    {

        solve();

    }

}


