#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n,m;cin>>n>>m;
    vector<string>a(n),b(n);
    ll p=0,q=0,r=0,s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='#')p++;
            else q++;
        }
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[i][j]=='#')r++;
            else s++;
        }
    }

        if(p==r && s==q)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


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


