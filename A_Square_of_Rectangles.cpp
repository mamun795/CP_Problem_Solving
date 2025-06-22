#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define mod   1000000007
#define Exp   1e18

void solve()
{
    ll l1,b1,l2,b2,l3,b3;cin>>l1>>b1>>l2>>b2>>l3>>b3;
    if(l1==l2 && l2== l3 && b1+b2+b3==l1)hmm;
    else if(b1==b2 && b2==b3 && l1+l2+l3==b1)hmm;
    else if(l1>=b1 && l2+l3==l1 && b2==b3 && b1+b2==l1)hmm;
    else if(b1>=l1 && b2+b3==b1 && l2==l3 && l1+l2==b1)hmm;
    else na;



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


