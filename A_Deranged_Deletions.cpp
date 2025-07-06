#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    vector<ll>v(n),p(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        p[i]=v[i];
    }
    sort(p.begin(),p.end());
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]==p[i]){
            cnt++;
            v[i]=-1;
        }
    }
    if(cnt==n)na;
    else{
        hmm;
        cout<<n-cnt<<endl;
        for(int i=0;i<n;i++){
            if(v[i]!=-1)cout<<v[i]<<' ';
        }
        cout<<endl;
    }


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


