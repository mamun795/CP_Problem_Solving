#include <bits/stdc++.h>
#include <cstdint>
#define int long long
#define pb push_back
using namespace std;

int32_t main() {
	int t;        cin >> t;
    while(t--){
        int n;      cin >> n;
        string s;        cin >> s;
        map<char,int>m;
        bool ok=false;
        for(int i=1 ; i<n-1 ; i++){
            m[s[i]]++;
            if(m[s[i]]==2 or (s[0]==s[i] ) or s[n-1] == s[i]){
                ok=true;
                break;
            }
        }
        if(ok)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}