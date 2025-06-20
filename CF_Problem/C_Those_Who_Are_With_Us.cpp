
#include <bits/stdc++.h>
#include <cstdint>
#define int long long
#define pb push_back
using namespace std;

int32_t main() {
	int t;        cin >> t;
    while(t--){
      int n,m;
      cin >> n >> m;
    int arr[n][m];
    int mx=0;
    vector<pair<int,int>>p;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j < m; j++){
            cin >> arr[i][j];
            if(mx<arr[i][j]){
                mx=arr[i][j];
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j < m; j++){
           
            if(mx==arr[i][j]){
               p.pb({i,j});
            }
        }
    }
    if(p.size()==1){
        cout<<mx-1<<endl;
        continue;
    }
    sort(p.begin(),p.end());
    vector<int>v;
    for(auto u:p){
        v.pb(u.first);
    }
    int size=v.size();
    bool ok=false;
    for(int i=0 ; i<size ; i++){
        set<int>s;
        for(auto u:p){
            if(u.first!=v[i] ){
                s.insert(u.second);
            }
        }
        if(s.size()==1){
            ok=true;
            break;
        }
    }
     if(ok)cout<<mx-1<<endl;
     else cout<<mx<<endl;
    }
}