// Author: Yash Lalchandani(QY)
// Connect on : WhatsApp Link: https://bit.ly/3RVznxY
// Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
// Connect on : Instagram Link: https://bit.ly/46I0kcl
// Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
// Date: October 10, 2023
// Description: This is a simple C++ program.

#include<bits/stdc++.h>

using namespace std;

//#define test

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
//#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define mod 100000007
#define limit 200005
#define ceil(a,b) (ll)((a+b-1)/b)




void solve(){

int n;cin>>n;
int arr[n+5];
for(int i=1;i<=n;i++){
    cin>>arr[i];
}

int l=1,r=n;
int  l_ind=1,r_ind=n;

while(l_ind+1<r_ind){
    if(arr[l_ind]==l){l++;l_ind++;}
    else if(arr[l_ind]==r){r--;l_ind++;}
    else if(arr[r_ind]==r){r--;r_ind--;}
    else if(arr[r_ind]==l){l++;r_ind--;}
    else{
        break;
    }
}

if(r_ind-l_ind+1 >=4)cout<<l_ind<<" "<<r_ind<<"\n";
else cout<<"-1\n";

}//end of solve()

int main(){
Fast;

int t=1;
cin>>t;
for(int i=1;i<=t;i++){
    solve();
}
return 0;
}
