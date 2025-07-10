#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    ll n;cin>>n;
    ll k=1,s=n-1;
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=s;j++)cout<<' ';
        for(int j=1;j<=k;j++)cout<<"*";
        cout<<endl;
        if(i<n)k+=2,s--;
        else k=3,s=n-2;   
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


