'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 21, 2023
Description: This is a Simple C++ Progranm
'''

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long

const ll INF = INT_MAX;
const ll mod = 1e9 + 7;

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<bool> vb;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;
typedef set<ll> sll;
typedef unordered_set<ll> usll;


#define pb push_back
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define rep(i,x,y) for(ll i=x;i<y;i++)
#define rrep(i,x,y) for(ll i=x;i>=y;i--)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));

ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}

bool isPrime(ll n) {if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 || n % 3 == 0)return false; for (int i = 5; i * i <= n; i = i + 6)if (n % i == 0 || n % (i + 2) == 0)return false; return true;}
bool isPowerOfTwo(ll x) {if (x == 0)return false; return (x & (x - 1)) == 0;}
bool isPerfectSquare(ll x) {if (x >= 0) {ll sr = sqrt(x); return (sr * sr == x);} return false;}
bool sortfa(const pair<int, int> &a, const pair<int, int> &b) {return (a.first < b.first);}
bool sortfsa(const pair<int, int> &a, const pair<int, int> &b) {if (a.first == b.first) {return (a.second < b.second);} else {return (a.first < b.first);}}
bool sorta(const pair<int, int> &a, const pair<int, int> &b) {return (a.second < b.second);}
bool sortd(const pair<int, int> &a, const pair<int, int> &b) {return (a.second > b.second);}

template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v) {for (auto &it : v)cin >> it; return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
template <typename T> // cout << set<T>
ostream& operator<<(ostream& os, const set<T>& v) {for (auto it : v) {os << it; if (it != *v.rbegin())os << " ";} os << "\n"; return os;}
template <typename T, typename S> // cout << map<T,S>
ostream& operator<<(ostream& os, const map<T, S>& v) {for (auto it : v) os << it.first << " " << it.second << "\n"; return os;}

void solve() {
    ll sum = 0, sum1 = 0, max1 = 0, min1 = 0;
    bool flag = false;
    ll n, k;
    cin >> n;
    vll v;
    rep(i, 0, n) {
        ll q;
        cin >> q;
        v.pb(q);
    }
    sort(all(v));
    ll m = n;
    ll half = n / 2;
    for (ll i = 0; i < n / 2; i++) {
        while (true) {
            if (v[i] * 2 <= v[half]) {
                m--;
                half++;
                break;
            }
            else {
                half++;
            }
            if (half == n) {
                break;
            }
        }
        if (half == n) {
            break;
        }
    }
    //cout << v << endl;
    cout << m;



}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    cout << fixed << setprecision(10);
    cerr << "Time:" << 1000 * ((double long)clock()) / (double long)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
