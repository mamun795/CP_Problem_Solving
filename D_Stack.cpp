#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
ll dx[]={0,0,1,-1,-1,-1,1,1};
ll dy[]={1,-1,0,0,1,-1,1,-1};

void solve()
{
    ll n;cin>>n;
    string s;
    stack<ll>st;
    while(n--){
        cin>>s;
        if(s=="push"){
            ll x;cin>>x;
            st.push(x);
        }
        else if(s=="top"){
            cout<<st.top()<<endl;
        }
        else{
            st.pop();
        }

    }


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


