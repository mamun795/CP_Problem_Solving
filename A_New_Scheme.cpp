#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
    bool f=true;
    ll a[8];
    for(int i=0;i<8;i++){cin>>a[i];
        if(a[i]<100 || a[i]>675 || a[i]%25!=0)f=false;
    }
    
        
    if(!f){
        cout<<"No"<<endl;
        return;
    }
    for(int i=0;i<7;i++){
        if(a[i]>a[i+1])f=false;
    }
     if(!f){
        cout<<"No"<<endl;
        return;
    }
    else cout<<"Yes"<<endl;

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


