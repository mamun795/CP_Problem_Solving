#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
#define hmm cout<<"YES"<<endl
#define na cout<<"NO"<<endl
#define mod   1000000007
#define Exp   1e18

void solve()
{

    int n;cin >> n;
        string s;        cin >> s;
        map<char,int>m;
        bool ok=false;
        for(int i=1 ; i<n-1 ; i++){
            m[s[i]]++;
            if(m[s[i]]==2 or (s[0]==s[i] ) or s[n-1] == s[i]){
                hmm;
                break;
            }
        }
        na;
        

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


