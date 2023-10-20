// Author: Yash Lalchandani(QY)
// Connect on : WhatsApp Link: https://bit.ly/3RVznxY
// Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
// Connect on : Instagram Link: https://bit.ly/46I0kcl
// Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
// Date: October 10, 2023
// Description: This is a simple C++ program.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;cin>>n>>k;
    vector<ll> a(n,0);
    for (ll i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<ll> pref(n+1,0);
    for(ll i=0; i<n; i++){
        pref[i+1] = pref[i] + a[i];
    }
    ll ans = 0;
    for(ll i=0; i<=k; i++){
        ans = max(ans, pref[n - (k - i)] - pref[2 * i]);
    }
    cout<<ans<<endl;
}
int main(){
    ll t;cin>>t;
    while(t--){
        
        solve();
    }
	return 0;
}