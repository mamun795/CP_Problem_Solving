#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

bool f=true;

bool check(vector<ll>v){
    ll l=0,r=v.size()-1;
    while(l<r){
        if(v[l]!=v[r]){
            return false;
            
        }
        l++,r--;

    }
    return true;

}


void solve()
{
    ll n,a,b;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll l=0,r=n-1;
    while(l<r){
        if(v[l]!=v[r]){
            f=false;
            a=v[l];
            b=v[r];
            break;
        }
        l++,r--;

    }
    if(f)hmm;
    else{
        vector<ll>x,y;
        for(int i=0;i<n;i++)if(v[i]!=a)x.push_back(v[i]);
        for(int i=0;i<n;i++)if(v[i]!=b)y.push_back(v[i]);
        f=true;
        if(check(x) || check(y))hmm;
        else na;
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


