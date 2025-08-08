#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
ll dx[]={0,0,1,-1,-1,-1,1,1};
ll dy[]={1,-1,0,0,1,-1,1,-1};

void solve()
{
    queue<int>q;
    ll k=3;
    ll n;cin>>n;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        q.push(x);
    }
    //<<q.size()<<endl;
    vector<int>v;
        while(!q.empty()){
            v.push_back(q.front());
            //cout<<q.front()<<' ';
            q.pop();
        }
        //cout<<q.size()<<endl;
    reverse(v.begin(),v.begin()+k);
   for(auto i:v){
    q.push(i);
   }
   while(!q.empty()){
    cout<<q.front()<<' ';
    q.pop();
   }
    cout<<endl;
    //cout<<v.size()<<endl;


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


