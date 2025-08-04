#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl

void solve()
{
  vector<string>s(9);
  for(int i=1;i<=8;i++){
    for(int j=1;j<=8;j++)cin>>s[i][j];
  }

  for(int i=1;i<=8;i++){
    for(int j=1;j<=8;j++){
        if(s[j][i]=='*'){
            cout<<char('a'+i-1)<<9-j<<endl;
            return;
        }
    }
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


