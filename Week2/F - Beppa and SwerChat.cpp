// Author: Yash Lalchandani(QY)
// Connect on : WhatsApp Link: https://bit.ly/3RVznxY
// Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
// Connect on : Instagram Link: https://bit.ly/46I0kcl
// Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
// Date: October 10, 2023
// Description: This is a simple C++ program.

#include <bits/stdc++.h>
using namespace std;
 
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"
#define ll long long
 
 
void solve(){
    int n;cin>>n;
    vector<ll> a(n),b(n),vis(n+1,0);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int i = 0;
    int j = 0;
    int mx = 0;
    while(j<n){
        if(vis[a[i]]==1){
            i++;
            continue;
        }
        if(a[i]!=b[j] && vis[b[j]]==0){
            vis[b[j]] = 1;
            mx = j+1;
            j++;
        }
        else if(a[i]==b[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout<<mx<<endl;
     
}
 
int32_t main(){
    IOS;
    ll t;
    cin>>t;
    while(t--){
    solve();
    }
 
    return 0;
}