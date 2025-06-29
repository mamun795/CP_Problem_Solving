#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>v(n),b;
     ll cnt=0;
     for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<62;j++){
            if((v[i]&(1ll<<j))==0)b.push_back(1ll<<j);
        }
    }
    sort(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        if(b[i]<=k && k>0){
            k-=b[i];
            cnt++;
        }

    }
    for(int i=0;i<n;i++){
        cnt+=__popcount(v[i]);
    }
    cout<<cnt<<endl;


}


int main()
{
    ll t;
    t=1;
    cin>>t;
    while(t--)
    {

        solve();

    }

}


