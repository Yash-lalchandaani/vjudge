'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 21, 2023
Description: This is a Simple C++ Progranm
'''

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max1 300021
#define gcd __gcd
const ll mod=1e9+7;
#define NO {puts("NO") ; return ;}
#define YES {puts("YES") ; return ;}
const ll INF = 0x3f3f3f3f;
#define nx x+fx[i][0]
#define ny y+fx[i][1]
#define pb push_back
#define pii pair<int,int>
const ll N=3e5+10;
ll m,ans,k,d,t,c,cnt,n,l,r,i,j;	
string strr,str;
ll len=0,gs=0,min_=INF,sum=0;
int max_;
ll fx[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int t1[max1];
inline ll lowbit(ll x){return x&(-x);}
inline ll ls(ll x){return x<<1;}
inline ll rs(ll x){return x<<1|1;}
void update(ll x,ll d){while(x<=n){t1[x]+=d;x+=lowbit(x);}}
inline ll qsum(ll x){ll ans=0;while(x>0){ans+=t1[x];x-=lowbit(x);}return ans;}
struct edge{
       int u,v,w,nex;
}e[max1];
struct node{
	int u,val;
};
ll head[max1],a[max1],s[max1],in[max1],dp[205][205];
int st,ed;
void add(int x,int y,int z)
{
    e[++cnt].u=x;
    e[cnt].v=y;
    e[cnt].w=z;
    e[cnt].nex=head[x];
    head[x]=cnt;
}
inline void solve() {
       cin>>n>>m;ans=1;
       fill(a+1,a+n+1,0);
       for(int i=1;i<=m;i++) cin>>c,a[c]++;
//       sort(s+1,s+n+1);
       int l=1,r=m*2;
 //      cout<<r<<"\n";
  auto check = [&](int t) {
    int64_t r = m;
    for (int i = 1;i <= n;i++) {
      if (a[i] < t) r -= a[i] + (t - a[i]) / 2;
      else r -= t;
    }
    return r <= 0;
  }; 
       while(l<r){
	   	int mid=(l+r)/2;
	   	if(check(mid)) r=mid;
	   	else l=mid+1;
//	   	cout<<r<<endl;
	   }
	   cout<<l<<"\n";
}  
int main() {
     cin.tie(nullptr) -> sync_with_stdio(false); 
	 cout.tie(0);cout.setf(ios::fixed);

   	 int __=1;
    cin>>__;	  
    while(__--)
	{
	  solve();
	} 	
      return 0;
}