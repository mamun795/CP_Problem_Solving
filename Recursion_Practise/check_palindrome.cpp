#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define mod   1000000007
#define Exp   1e18


int palindrome(int n)
{
    if(n<1)
    {
        return 0;
    }
    return ((n%10)*10)+(palindrome(n/10)*10);

}




void solve()
{
    ll n;cin>>n;
    cout<<palindrome(n)<<endl;


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


