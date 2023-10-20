// Author: Yash Lalchandani(QY)
// Connect on : WhatsApp Link: https://bit.ly/3RVznxY
// Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
// Connect on : Instagram Link: https://bit.ly/46I0kcl
// Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
// Date: October 10, 2023
// Description: This is a simple C++ program.

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
bool isPalindrome(string &s,int n)
{
    for (int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
        return false;
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(isPalindrome(s,n)){
    cout<<"Yes\n";
    return;
    }
    int i1;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
        {
            i1=i;
            break;
        }
    }
    int i2=n/2;
    for(int i=i1+1;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
        {
            i2=i;
            break;
        }
    }
    string s2=s;
    for(int i=i1;i<i2;i++)
    {
        if(s2[i]=='1')
        s2[i]='0';
        else
        s2[i]='1';
    }
    if (isPalindrome(s2,n))
    cout<<"Yes\n";
    else{
        for (int i=n-1-i1;i<n-1-i2;i++)
        {if(s[i]=='1')
        s[i]='0';
        else
        s[i]='1';}
        if (isPalindrome(s,n))
        cout<<"Yes\n";
        else cout<<"No\n";
    }
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

}