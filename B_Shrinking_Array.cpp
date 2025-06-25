#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define mod   1000000007
#define Exp   1e18

void solve()
{
    ll n;cin>>n;
    vector<ll>v(n),t(n),p;
    set<ll>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        t[i]=v[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(abs(v[i]-v[i+1])<=1)
        {
            cout<<0<<endl;
            return;
        }
    }
  sort(t.begin(),t.end());
  bool f=false;
  for(int i=0;i<n-1;i++)
  {
       if(abs(t[i]-t[i+1])<=1)
       {
        s.insert(t[i]);
        s.insert(t[i+1]);
        f=true;
       }
  }
  if(!f)cout<<-1<<endl;
  else
  {
    for(auto i:s)
    {
        for(int j=0;j<n;j++)
        {
            if(i==v[j])p.push_back(j);
        }

    }

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


