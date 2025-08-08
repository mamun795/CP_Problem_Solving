#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
ll dx[]={0,0,1,-1,-1,-1,1,1};
ll dy[]={1,-1,0,0,1,-1,1,-1};

void solve()
{
  
    ll n, q, l, r;
    char ch;
    string s, x;
    cin>>n>>q>>s;
    while(q--)
    {
        ll mn=INT_MAX, mx=INT_MIN;
        cin>>x;
        if(x=="back")
            cout<<s.back()<<endl;
        else if(x=="front")
            cout<<s.front()<<endl;
        else if(x=="pop_back")
            s.pop_back();
        else if(x=="push_back")
            cin>>ch, s.push_back(ch);
        else if(x=="print")
            cin>>l, cout<<s[l-1]<<endl;
        else if(x=="sort")
            cin>>l>>r, mn=min(l, r), mx=max(l, r), sort(s.begin()+mn-1, s.begin()+mx);
        else if(x=="reverse")
            cin>>l>>r, mn=min(l, r), mx=max(l, r), reverse(s.begin()+mn-1, s.begin()+mx);
        else if(x=="substr")
            cin>>l>>r, mn=min(l, r), mx=max(l, r), cout<<s.substr(mn-1, mx-mn+1)<<endl;
    
}


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


