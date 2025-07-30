#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll x;cin>>x;
        for(int j=1;j<=x;j++){
            ll mj=j;
            ll mi=i;
            string s;
            while(mi>0){
                int b=mi%10;
                char c=b+'0';
                s+=c;
                mi/=10;

            }
            while(mj>0){
                char b=(mj%10)+'0';
                s+=b;
                mj/=10;
            }

            
            
            sort(s.begin(),s.end());
            if(s[0]==s.back())ans++;

        }
    }
    cout<<ans<<endl;


}


int main()
{
    ll t;
    t=1;
    //cin>>t;
    while(t--)
    {

        solve();

    }

}


